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
   * Adds the homepage flexslider behaviour
   */
  Drupal.behaviors.stickyHeader = {
    attach: function (context, settings) {
      $(".header-container", context).once('header-container-ele', function () {
        $("#typo-sticky-header-sticky-wrapper", context).sticky({topSpacing: 0});
      });
    }
  };

  /**
   * Adds badges to the menu
   */
  Drupal.behaviors.menuBadges = {
    attach: function (context, settings) {
      $(".block-tb-megamenu", context).once('block-tb-megamenu-ele', function () {
        //find all elements with badges and place correct badges with texts
        var $caption_text = $(".mega-caption", context);

        $caption_text.each(function () {

          var $label_type = $(this).closest("li").attr("class").split(/\s+/),
            $classes_array = $label_type.map(function (className) {
              return className.indexOf('badge') > -1 ? className.replace("badge-", "") : "";
            });

          $(this).attr("class", $classes_array.join(" "));
        });

      });
    }
  };

  /**
   * Adds the owl carousel blog items
   */
  Drupal.behaviors.blogCarousel = {
    attach: function (context, settings) {

      $(".view-blog-items-front", context).once('view-blog-items-owl', function () {
        $(this).find(".owl-carousel", context).owlCarousel({
          "enable": true,
          "dots": false,
          "autoplay": true,
          "autoplayTimeout": 5000,
          "autoplayHoverPause": true,
          "smartSpeed": 750,
          "animateOut": "fadeOut",
          "animateIn": "fadeIn",
          "items": 3,
          "loop": false,
          "lazyLoad": true,
          "margin": 30,
          "autoHeight": false,
          "rtl": false,
          "responsive": {
            "0": {"items": "1"},
            "480": {"items": "1"},
            "768": {"items": "2"},
            "992": {"items": "3"},
            "1200": {"items": "3"}
          },
          "nav": false,
          "rewind": true,
          "navText": ["<i class=\"fa fa-angle-left\"><\/i>", "<i class=\"fa fa-angle-right\"><\/i>"],
        });
      });

    }
  };

  /**
   * Adds the owl carousel product images
   */
  Drupal.behaviors.frontCarousel = {
    attach: function (context, settings) {

      $(".view-front-carousel", context).once('view-front-main-carousel', function () {
        $(this).find(".owl-carousel", context).owlCarousel({
          "enable": true,
          "dots": false,
          "autoplay": true,
          "autoplayTimeout": 5000,
          "autoplayHoverPause": true,
          "smartSpeed": 750,
          "animateOut": "fadeOut",
          "animateIn": "fadeIn",
          "items": 5,
          "loop": false,
          "lazyLoad": true,
          "margin": 0,
          "autoHeight": false,
          "rtl": false,
          "responsive": {
            "0": {"items": "1"},
            "480": {"items": "2"},
            "768": {"items": "3"},
            "992": {"items": "3"},
            "1200": {"items": "4"}
          },
          "nav": true,
          "rewind": true,
          "navText": ["<i class=\"fa fa-angle-left\"><\/i>", "<i class=\"fa fa-angle-right\"><\/i>"]
        });
      });

    }
  };

  /**
   * Adds lightbox
   */
  Drupal.behaviors.homepageTeasers = {
    attach: function (context, settings) {

      $(".view-tags-category-list", context).once('homepage-teasers', function () {

        $('.widget-product-tab', context).find('a').click(function () {

          var $term_id = $(this).attr('data-cat-term-id');

          //hide all views and display only the clicked one.
          $('.view-product-teasers').hide();

          $('.view-teasers-term-' + $term_id).show();

          return false;

        });

        var $tabs = $('.widget-tabs', context);
        $tabs.find('li').first().find('a').click();

      });
    }
  };

  /**
   * Convert catalog checkboxes of colors into colored boxes
   */
  Drupal.behaviors.catalogColorBoxes = {
    attach: function (context, settings) {

      $(".views-widget-filter-field_color_value", context).once('colors-boxes', function () {

        var $radios = $(".bef-select-as-radios", context);
        $radios.find('label').removeClass('hidden');

        $radios.find('.form-item-field-color-value', context).each(function () {

          var $label = $(this).find('label'),
            $color = $label.text();

          $label.css('background', $color).addClass('colored-radio');

          if ($label.find('input').is(':checked')) {

            if ($label.find('input').attr('id') !== 'edit-field-color-value-all') {
              $radios.find('label').addClass('hidden-radio');
              $label.removeClass('hidden-radio');
            }
            $label.addClass("checked");
          }

          $label.find('input').hide();

        });

        $('#edit-field-color-value-all').parent().show().addClass("clear-colors");

      });
    }
  };

  /**
   * Convert catalog checkboxes of colors into colored boxes
   */
  Drupal.behaviors.productColorBoxes = {
    attach: function (context, settings) {

      var $attrs = $(".form-item-attributes-field-color");

      var $radios = $attrs.find(".form-radios");
      $radios.find('label').removeClass('hidden');

      $radios.find('.form-item-attributes-field-color').each(function () {

        var $label = $(this).find('label'),
          $color = $(this).find('.form-radio').attr('value');

        $label.css('background', $color).addClass('colored-radio');

        if ($label.find('input').is(':checked')) {
          $label.addClass("checked");
        }

        $label.find('input').hide();

      });
    }
  };

  /**
   * Adds lightbox
   */
  Drupal.behaviors.lightboxProducts = {
    attach: function (context, settings) {
      $(".gallery-image", context).once('gallery-image', function () {
        var lightboxconfig = {
          rel: 'gallery-image',
          maxWidth: '100%',
          maxHeight: '100%',
          close: '<i aria-hidden="true" class="icon_close"></i>',
          current: '{current}/{total}',
          className: 'gallery-show'
        };

        $('.gallery-image').colorbox(lightboxconfig);

      });
    }
  };

  /**
   * Adds lightbox
   */
  Drupal.behaviors.shopAccordion = {
    attach: function (context, settings) {
      //use jquery once
      $(document).ready(function () {
        $("#categories-nav").TypoAccordion({
          accordion: true,
          speed: 400,
          closedSign: 'collapse icon_plus',
          openedSign: 'expand icon_minus-06',
          mouseType: 0,
          easing: 'easeInOutQuad'
        });
        $(".expand").empty();

        //Open the one that goes to the current URL page
        var url = window.location.pathname;

        var link = $("#categories-nav").find("a[href='" + url + "']");

        if (link.siblings().length > 0) {
          $("#categories-nav").find("a[href='" + url + "']").parent().find('ul').css('display', 'block');
        }
        else {
          $("#categories-nav").find("a[href='" + url + "']").closest('ul').parent().find('ul').css('display', 'block');
        }

      });
    }
  };

  /**
   * Adds the owl carousel product images
   */
  Drupal.behaviors.frontOwlCarousel = {
    attach: function (context, settings) {

      $(".view-front-main-slider .owl-carousel," +
        " .view-front-main-slider2 .owl-carousel," +
        " .view-fluid-main-slider .owl-carousel," +
        " .view-fluid2-main-slider .owl-carousel", context).owlCarousel({
        "enable": true,
        "dots": true,
        "autoplay": true,
        "autoplayTimeout": 5000,
        "autoplayHoverPause": true,
        "smartSpeed": 750,
        "animateOut": "fadeOut",
        "animateIn": "fadeIn",
        "items": 1,
        "loop": false,
        "lazyLoad": true,
        "margin": 0,
        "autoHeight": false,
        "rtl": false,
        "responsive": {
          "0": null,
          "480": null,
          "768": null,
          "992": null,
          "1200": null
        },
        "nav": true,
        "rewind": true,
        "navText": ["<i class=\"fa fa-angle-left\"><\/i>", "<i class=\"fa fa-angle-right\"><\/i>"]
      });

      $(".page-front-sidebar .category-products .owl-carousel", context).owlCarousel({
        "enable": true,
        "dots": false,
        "autoplay": false,
        "autoplayTimeout": false,
        "autoplayHoverPause": true,
        "smartSpeed": 750,
        "animateOut": "fadeOut",
        "animateIn": "fadeIn",
        "items": 3,
        "loop": false,
        "lazyLoad": true,
        "margin": 30,
        "autoHeight": false,
        "rtl": false,
        "responsive": {
          "0": {"items": "1"},
          "480": {"items": "2"},
          "768": {"items": "2", "loop": true},
          "992": {"items": "2", "loop": true},
          "1200": {"items": "3", "loop": true}
        },
        "nav": true,
        "rewind": true,
        "navText": ["<i class=\"fa fa-angle-left\"><\/i>", "<i class=\"fa fa-angle-right\"><\/i>"],
      });

      $(".category-products .owl-carousel", context).owlCarousel({
        "enable": true,
        "dots": false,
        "autoplay": false,
        "autoplayTimeout": false,
        "autoplayHoverPause": true,
        "smartSpeed": 750,
        "animateOut": "fadeOut",
        "animateIn": "fadeIn",
        "items": 4,
        "loop": false,
        "lazyLoad": true,
        "margin": 30,
        "autoHeight": false,
        "rtl": false,
        "responsive": {
          "0": {"items": "1"},
          "480": {"items": "2"},
          "768": {"items": "2", "loop": true},
          "992": {"items": "3", "loop": true},
          "1200": {"items": "4", "loop": true}
        },
        "nav": true,
        "rewind": true,
        "navText": ["<i class=\"fa fa-angle-left\"><\/i>", "<i class=\"fa fa-angle-right\"><\/i>"],
      });

    }
  };

  /**
   * Toggle mobile menu
   */
  Drupal.behaviors.togglemobilemenu = {
    attach: function (context, settings) {

      $(".menu-bar-btn", context).once('menu-bar-button', function () {

        $('input, textarea').placeholder();

        $('.typo-navigation-vertical .block-title').on('click', function (e) {
          $('.typo-main-menu-vertical').slideToggle(400);
        });

        // button show hide menu mobile
        $('.btn-nav').on('click', function (event) {
          event.preventDefault();
          $('.overlay-contentscale').addClass('open');
          $('.typo-wrapper').addClass('overlay-open');
          $('body').bind('scroll touchmove mousewheel', function (event) {
            event.preventDefault()
          });
        });

        $('.overlay-close').on('click', function (event) {
          event.preventDefault();
          $('.overlay-contentscale').removeClass('open');
          $('.btn-nav').removeClass('active');
          $('.typo-wrapper').removeClass('overlay-open');
          $('body').unbind('scroll touchmove mousewheel');
        });

        $(".navbar").mCustomScrollbar({
          theme: "light-2",
          scrollButtons: {enable: false}
        });

      });
    }
  };

  /**
   * Mobile menu accordion
   */
  Drupal.behaviors.mobilemenuAccordion = {
    attach: function (context, settings) {
      //use jquery once
      $(document).ready(function () {
        $("#typo-accordion").TypoAccordion({
          accordion: true,
          speed: 400,
          closedSign: 'collapse icon_plus',
          openedSign: 'expand icon_minus-06',
          mouseType: 0,
          easing: 'easeInOutQuad'
        });
        $(".expand").empty();

        //Open the one that goes to the current URL page
        var url = window.location.pathname;

        var link = $("#typo-accordion").find("a[href='" + url + "']");

        if (link.siblings().length > 0) {
          $("#typo-accordion").find("a[href='" + url + "']").parent().find('ul').css('display', 'block');
        }
        else {
          $("#typo-accordion").find("a[href='" + url + "']").closest('ul').parent().find('ul').css('display', 'block');
        }

        $("#typo-accordion").css('display', 'inline-block');
        $("#typo-accordion").find("a[href*='shop']").parent().find('ul').css('display', 'block');

      });
    }
  };

  /**
   * Mobile menu accordion
   */
  Drupal.behaviors.multiscroll = {
    attach: function (context, settings) {
      //use jquery once

      $(".view-front-multiscroll", context).once('multiscroll', function () {

        if ($('#multiscroll', context).length) {
          $('#multiscroll', context).multiscroll({
            onLeave: function (index, newIndex, direction) {
              if (direction == 'down') {
                $('#multiscroll .ms-section', context).removeClass('moveUp moveDown');
                $('#multiscroll .ms-section', context).eq(newIndex - 1).addClass('moveUp');
              }
              else if (direction == 'up') {
                $('#multiscroll .ms-section', context).removeClass('moveUp moveDown');
                $('#multiscroll .ms-section', context).eq(newIndex - 1).addClass('moveDown');
              }
            }
          });
        }
        ;

      });

    }
  };


  /**
   * Catalog filter sticky sidebar
   */
  Drupal.behaviors.filterstickycatalog = {
    attach: function (context, settings) {
      //use jquery once

      $(".btn-open-filter", context).once('filter-button', function () {

        $(this).click(function () {
          $('.sidebar-one-column').toggleClass('showing');
        });

        $('.btn-close-filter').click(function () {
          $('.sidebar-one-column').removeClass('showing');
        });

      });

    }
  };

  /**
   * Catalog clients carousel
   */
  Drupal.behaviors.clientsCarousel = {
    attach: function (context, settings) {
      //use jquery once

      $(".widget-product-brands", context).once('brands-carousel', function () {

        $(this).find(".owl-carousel", context).owlCarousel({
          "enable": true,
          "dots": false,
          "autoplay": false,
          "autoplayTimeout": false,
          "autoplayHoverPause": true,
          "smartSpeed": 750,
          "animateOut": "fadeOut",
          "animateIn": "fadeIn",
          "items": 5,
          "loop": false,
          "lazyLoad": true,
          "margin": 0,
          "autoHeight": false,
          "rtl": false,
          "responsive": {
            "0": {"items": "2"},
            "480": {"items": "3"},
            "768": [],
            "992": [],
            "1200": []
          },
          "nav": true,
          "rewind": true,
          "navText": ["<i class=\"fa fa-angle-left\"><\/i>", "<i class=\"fa fa-angle-right\"><\/i>"],
        });

      });

    }
  };

  /**
   * Fluid2 carousel
   */
  Drupal.behaviors.fluid2Carousel = {
    attach: function (context, settings) {
      //use jquery once

      $(".page-front-fluid2", context).once('fluid2carousels', function () {

        $(this).find(".owl-carousel", context).owlCarousel({
          "enable": true,
          "dots": false,
          "autoplay": true,
          "autoplayTimeout": 5000,
          "autoplayHoverPause": true,
          "smartSpeed": 750,
          "animateOut": "fadeOut",
          "animateIn": "fadeIn",
          "items": 1,
          "loop": false,
          "lazyLoad": true,
          "margin": 0,
          "autoHeight": false,
          "rtl": false,
          "responsive": {"0": [], "480": [], "768": [], "992": [], "1200": []},
          "nav": true,
          "rewind": true,
          "navText": ["<i class=\"fa fa-angle-left\"><\/i>", "<i class=\"fa fa-angle-right\"><\/i>"]
        });

      });

    }
  };

  /**
   * Fluid 2 parallax
   */
  Drupal.behaviors.fluid2Parallaxes = {
    attach: function (context, settings) {
      //use jquery once

      $(".page-front-fluid2 .main-top .pane-2", context).once('pane2-parallax', function () {

        var element_id = $(this).attr('id');

        var image_url = settings.basePath + "profiles/logancee/themes/loganceevisual/images/interior/img-block1.jpg";

        var config = {
          carousel: {
            "enable": false
          },
          parallax: {
            "enable": true,
            "type": "image",
            "overlay": "none",
            "video": {"src": null, "volume": false},
            "image": {
              "src": image_url,
              "fit": "cover",
              "repeat": "no-repeat",
              "height": "130%"
            },
            "file": {"poster": null, "mp4": null, "webm": null, "volume": false}
          },
          kenburns: {
            "enable": false
          }
        };

        new Typo.Widget(element_id, config);

      });

      $(".page-front-fluid2 .main-top .pane-4", context).once('pane4-parallax', function () {

        var element_id = $(this).attr('id');

        var image_url = settings.basePath + "profiles/logancee/themes/loganceevisual/images/interior/img-block2.jpg";

        var config = {
          carousel: {
            "enable": false
          },
          carouselConfig: null,
          animation: {
            "enable": false
          },
          parallax: {
            "enable": true,
            "type": "image",
            "overlay": "none",
            "video": {"src": null, "volume": false},
            "image": {
              "src": image_url,
              "fit": "cover",
              "repeat": "no-repeat",
              "height": "130%"
            },
            "file": {"poster": null, "mp4": null, "webm": null, "volume": false}
          },
          kenburns: {
            "enable": false
          }
        };

        new Typo.Widget(element_id, config);

      });

      $(".page-front-fluid2 .main-top .pane-5", context).once('pane5-parallax', function () {

        var element_id = $(this).attr('id');

        var image_url = settings.basePath + "profiles/logancee/themes/loganceevisual/images/interior/img-block3.jpg";

        var config = {
          carousel: {
            "enable": false
          },
          parallax: {
            "enable": true,
            "type": "image",
            "overlay": "none",
            "video": {"src": null, "volume": false},
            "image": {
              "src": image_url,
              "fit": "cover",
              "repeat": "no-repeat",
              "height": "120%"
            },
            "file": {"poster": null, "mp4": null, "webm": null, "volume": false}
          },
          kenburns: {
            "enable": false
          }
        };

        new Typo.Widget(element_id, config);

      });

      $(".page-front-fluid2 .main-top .pane-8", context).once('pane8-parallax', function () {

        var element_id = $(this).attr('id');

        var image_url = settings.basePath + "profiles/logancee/themes/loganceevisual/images/interior/img-block7.jpg";

        var config = {
          carousel: {
            "enable": false
          },
          parallax: {
            "enable": true,
            "type": "image",
            "overlay": "none",
            "video": {"src": null, "volume": false},
            "image": {
              "src": image_url,
              "fit": "cover",
              "repeat": "no-repeat",
              "height": "130%"
            },
            "file": {"poster": null, "mp4": null, "webm": null, "volume": false}
          },
          kenburns: {
            "enable": false
          }
        };

        new Typo.Widget(element_id, config);

      });

      $(".page-front-fluid2 .main-top .pane-9", context).once('pane9-parallax', function () {

        var element_id = $(this).attr('id');

        var image_url = settings.basePath + "profiles/logancee/themes/loganceevisual/images/interior/img-block8.jpg";

        var config = {
          carousel: {
            "enable": false
          },
          parallax: {
            "enable": true,
            "type": "image",
            "overlay": "none",
            "video": {"src": null, "volume": false},
            "image": {
              "src": image_url,
              "fit": "cover",
              "repeat": "no-repeat",
              "height": "150%"
            },
            "file": {"poster": null, "mp4": null, "webm": null, "volume": false}
          },
          kenburns: {
            "enable": false
          }
        };

        new Typo.Widget(element_id, config);

      });

    }
  };

  /**
   * Toggle mobile menu
   */
  Drupal.behaviors.sidebarScroll = {
    attach: function (context, settings) {

      $(".vheader-layout-1", context).once('vertical-header-scroll', function () {
        $(this).find(".sb-header-menu", context).mCustomScrollbar({
          theme: "dark-2",
          scrollButtons: {
            enable: false
          }
        });

      });

      $(".vheader-layout-2", context).once('vertical-header-scroll', function () {
        $(this).find(".sb-header-menu", context).mCustomScrollbar({
          theme: "light-2",
          scrollButtons: {
            enable: false
          }
        });

      });
    }
  };

  /**
   * Quick view button
   */
  Drupal.behaviors.quickView = {
    attach: function (context, settings) {

      $("body", context).once('quickview', function () {

          $(document).on('click', '.show-quickview', function (event) {
            event.preventDefault();
            if ($('.btn-cart-mobile').length == 0) {
              $(this).next().trigger('click');
            } else {
              return window.location.href = $(this).attr('data-submit');
            }
          });

          $(document).on('click', '.product-quickview', function (event) {
            event.preventDefault();
            var $href = $(this).attr('href');
            $.colorbox({
              iframe: true,
              opacity: 0.8,
              href: $href,
              speed: 300,
              current: '{current} / {total}',
              width: '100%',
              height: '100%',
              maxWidth: '930px',
              maxHeight: '100%',
              fastIframe: true,
              fixed: true,
              className: 'box-quickview',
              close: '<i aria-hidden="true" class="icon_close"></i>',
              onOpen: function () {
                $('#cboxLoadingGraphic').addClass('box-loading');
              },
              onComplete: function () {

                $("#cboxLoadedContent iframe").load(function () {
                  //var $test = $("#cboxLoadedContent iframe").contents().find("#product-view").html();
                  //$("#cboxLoadedContent iframe").contents().find(".cms-index-index").html($test);
                  $("#cboxLoadedContent iframe").contents().find("header").hide();
                  $("#cboxLoadedContent iframe").contents().find("footer").hide();
                  $("#cboxLoadedContent iframe").contents().find(".top-direct-wrap").hide();
                  $("#cboxLoadedContent iframe").contents().find("#block-views-related-products-block").hide();
                });

                setTimeout(function () {
                  $('#cboxLoadingGraphic').removeClass('box-loading');
                }, 3000);
              }
            });
          });

        }
      );
    }
  }
  ;


})
(jQuery);
