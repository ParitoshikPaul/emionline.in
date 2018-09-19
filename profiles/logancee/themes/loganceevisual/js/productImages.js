/*
 * @file
 * Loganceevisual js
 *
 * Js behaviours for fundedvisual theme. All functionality just enhances default behaviour so that disabling javacript
 * does not destoy the app.
 */

(function ($) {

  "use strict";

  /**
   * Adds Product Images
   */
  Drupal.behaviors.productImages = {
    attach: function (context, settings) {

      // ==============================================
      // PDP - image zoom - needs to be available outside document.ready scope
      // ==============================================

      var ProductMediaManager = {
        IMAGE_ZOOM_THRESHOLD: 20,
        imageWrapper: null,

        destroyZoom: function() {
          $('.zoomContainer').remove();
          $('.product-image-gallery .gallery-image').removeData('elevateZoom');
        },

        createZoom: function(image) {
          // Destroy since zoom shouldn't be enabled under certain conditions
          ProductMediaManager.destroyZoom();

          // if(
          //     // Don't use zoom on devices where touch has been used
          //     PointerManager.getPointer() == PointerManager.TOUCH_POINTER_TYPE
          //     // Don't use zoom when screen is small, or else zoom window shows outside body
          //     || Modernizr.mq("screen and (max-width:" + bp.medium + "px)")
          // ) {
          //     return; // zoom not enabled
          // }

          if (Modernizr.mq("screen and (max-width:767px)")) {
            return; // zoom not enabled
            image.preventDefault();
          }

          if(image.length <= 0) { //no image found
            return;
          }

          if(image[0].naturalWidth && image[0].naturalHeight) {
            var widthDiff = image[0].naturalWidth - image.width() - ProductMediaManager.IMAGE_ZOOM_THRESHOLD;
            var heightDiff = image[0].naturalHeight - image.height() - ProductMediaManager.IMAGE_ZOOM_THRESHOLD;

            if(widthDiff < 0 && heightDiff < 0) {
              //image not big enough

              image.parents('.product-image').removeClass('zoom-available');
              ProductMediaManager.destroyZoom();
              return;
            } else {
              image.parents('.product-image').addClass('zoom-available');
            }
          }

          var zoom_type = $('.product-image-zoom').attr('data-zoom-type');

          var configzoom = {
            zoomType: zoom_type == 'inner' ? 'inner' : 'lens',
            lensSize: 300,
            lensShape: zoom_type == 'inner' ? 'round' : zoom_type,
            borderSize: 1,
            containLensZoom: 1,
            cursor: 'crosshair',
            gallery: 'gallery_01',
            galleryActiveClass: 'active',
            responsive: 1
          };

          image.elevateZoom(configzoom);
        },

        swapImage: function(targetImage) {
          targetImage = $(targetImage);
          targetImage.addClass('gallery-image');

          ProductMediaManager.destroyZoom();

          var imageGallery = $('.product-image-gallery');

          if(targetImage[0].complete) { //image already loaded -- swap immediately

            imageGallery.find('.gallery-image').removeClass('visible');

            //move target image to correct place, in case it's necessary
            // imageGallery.append(targetImage);

            //reveal new image
            targetImage.addClass('visible');

            //wire zoom on new image
            ProductMediaManager.createZoom(targetImage);

          } else { //need to wait for image to load

            //add spinner
            imageGallery.addClass('loading');

            //move target image to correct place, in case it's necessary
            // imageGallery.append(targetImage);

            //wait until image is loaded
            imagesLoaded(targetImage, function() {
              //remove spinner
              imageGallery.removeClass('loading');

              //hide old image
              imageGallery.find('.gallery-image').removeClass('visible');

              //reveal new image
              targetImage.addClass('visible');

              //wire zoom on new image
              ProductMediaManager.createZoom(targetImage);
            });

          }
        },

        wireThumbnails: function() {
          //trigger image change event on thumbnail click
          $('.product-image-thumbs .thumb-link').click(function(e) {
            e.preventDefault();
            var jlink = $(this);
            var target = $('#image-' + jlink.data('image-index'));

            ProductMediaManager.swapImage(target);
          });

          var target = $('#image-0');
          ProductMediaManager.swapImage(target);
        },

        initZoom: function() {
          ProductMediaManager.createZoom($(".gallery-image.visible")); //set zoom on first image
        },

        init: function() {

          if ($('.product-img-box').length > 0){
            ProductMediaManager.imageWrapper = $('.product-img-box');

            // Re-initialize zoom on viewport size change since resizing causes problems with zoom and since smaller
            // viewport sizes shouldn't have zoom

            $(window).resize(function(event) {
              ProductMediaManager.initZoom();
            });

            //ProductMediaManager.initZoom();

            ProductMediaManager.wireThumbnails();

            $(document).trigger('product-media-loaded', ProductMediaManager);
          }
        }
      };

      ProductMediaManager.init();
    }
  };

  /**
   * Adds the owl carousel product images
   */
  Drupal.behaviors.owlCarousel = {
    attach: function (context, settings) {

      $(".product-image-thumbs.owl-carousel", context).owlCarousel({
        loop: false,
        rewind: true,
        dots: false,
        margin: 20,
        nav: true,
        items: 4,
        rtl: Boolean(0),
        navText: ['<i class="fa fa-angle-left"></i>', '<i class="fa fa-angle-right"></i>']
      });
    }
  };


})(jQuery);
