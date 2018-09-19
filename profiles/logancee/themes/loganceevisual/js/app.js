// Bootstrap prototype magento
(function() {
    var isBootstrapEvent = false;
    if (window.jQuery) {
        var all = jQuery('*');
        jQuery.each(['hide.bs.dropdown', 'hide.bs.collapse', 'hide.bs.modal', 'hide.bs.tooltip', 'hide.bs.popover'], function(index, eventName) {
            all.on(eventName, function(event) {
                isBootstrapEvent = true;
            });
        });
    }
    var originalHide = Element.hide;
    Element.addMethods({
        hide: function(element) {
            if (isBootstrapEvent) {
                isBootstrapEvent = false;
                return element;
            }
            return originalHide(element);
        }
    });
})();
jQuery(document).ready(function($) {
    $('input, textarea').placeholder();
    
    $('.typo-navigation-vertical .block-title').on('click', function(e) {
        $('.typo-main-menu-vertical').slideToggle(400);
    });

    // button show hide menu mobile
    $('.btn-nav').on('click', function(event) {
        event.preventDefault();
        $('.overlay-contentscale').addClass('open');
        $('.typo-wrapper').addClass('overlay-open');
        $('body').bind('scroll touchmove mousewheel', function(event) {
            event.preventDefault()
        });
    });
    $('.overlay-close').on('click', function(event) {
        event.preventDefault();
        $('.overlay-contentscale').removeClass('open');
        $('.btn-nav').removeClass('active');
        $('.typo-wrapper').removeClass('overlay-open');
        $('body').unbind('scroll touchmove mousewheel');
    });
});

var PointerManager = {
    MOUSE_POINTER_TYPE: 'mouse',
    TOUCH_POINTER_TYPE: 'touch',
    POINTER_EVENT_TIMEOUT_MS: 500,
    standardTouch: false,
    touchDetectionEvent: null,
    lastTouchType: null,
    pointerTimeout: null,
    pointerEventLock: false,
    getPointerEventsSupported: function() {
        return this.standardTouch;
    },
    getPointerEventsInputTypes: function() {
        if (window.navigator.pointerEnabled) { //IE 11+
            //return string values from http://msdn.microsoft.com/en-us/library/windows/apps/hh466130.aspx
            return {
                MOUSE: 'mouse',
                TOUCH: 'touch',
                PEN: 'pen'
            };
        } else if (window.navigator.msPointerEnabled) { //IE 10
            //return numeric values from http://msdn.microsoft.com/en-us/library/windows/apps/hh466130.aspx
            return {
                MOUSE: 0x00000004,
                TOUCH: 0x00000002,
                PEN: 0x00000003
            };
        } else { //other browsers don't support pointer events
            return {}; //return empty object
        }
    },
    /**
     * If called before init(), get best guess of input pointer type
     * using Modernizr test.
     * If called after init(), get current pointer in use.
     */
    getPointer: function() {
        // On iOS devices, always default to touch, as this.lastTouchType will intermittently return 'mouse' if
        // multiple touches are triggered in rapid succession in Safari on iOS
        if (Modernizr.ios) {
            return this.TOUCH_POINTER_TYPE;
        }
        if (this.lastTouchType) {
            return this.lastTouchType;
        }
        return Modernizr.touch ? this.TOUCH_POINTER_TYPE : this.MOUSE_POINTER_TYPE;
    },
    setPointerEventLock: function() {
        this.pointerEventLock = true;
    },
    clearPointerEventLock: function() {
        this.pointerEventLock = false;
    },
    setPointerEventLockTimeout: function() {
        var that = this;
        if (this.pointerTimeout) {
            clearTimeout(this.pointerTimeout);
        }
        this.setPointerEventLock();
        this.pointerTimeout = setTimeout(function() {
            that.clearPointerEventLock();
        }, this.POINTER_EVENT_TIMEOUT_MS);
    },
    triggerMouseEvent: function(originalEvent) {
        if (this.lastTouchType == this.MOUSE_POINTER_TYPE) {
            return; //prevent duplicate events
        }
        this.lastTouchType = this.MOUSE_POINTER_TYPE;
        jQuery(window).trigger('mouse-detected', originalEvent);
    },
    triggerTouchEvent: function(originalEvent) {
        if (this.lastTouchType == this.TOUCH_POINTER_TYPE) {
            return; //prevent duplicate events
        }
        this.lastTouchType = this.TOUCH_POINTER_TYPE;
        jQuery(window).trigger('touch-detected', originalEvent);
    },
    initEnv: function() {
        if (window.navigator.pointerEnabled) {
            this.standardTouch = true;
            this.touchDetectionEvent = 'pointermove';
        } else if (window.navigator.msPointerEnabled) {
            this.standardTouch = true;
            this.touchDetectionEvent = 'MSPointerMove';
        } else {
            this.touchDetectionEvent = 'touchstart';
        }
    },
    wirePointerDetection: function() {
        var that = this;
        if (this.standardTouch) { //standard-based touch events. Wire only one event.
            //detect pointer event
            jQuery(window).on(this.touchDetectionEvent, function(e) {
                switch (e.originalEvent.pointerType) {
                    case that.getPointerEventsInputTypes().MOUSE:
                        that.triggerMouseEvent(e);
                        break;
                    case that.getPointerEventsInputTypes().TOUCH:
                    case that.getPointerEventsInputTypes().PEN:
                        // intentionally group pen and touch together
                        that.triggerTouchEvent(e);
                        break;
                }
            });
        } else { //non-standard touch events. Wire touch and mouse competing events.
            //detect first touch
            jQuery(window).on(this.touchDetectionEvent, function(e) {
                if (that.pointerEventLock) {
                    return;
                }
                that.setPointerEventLockTimeout();
                that.triggerTouchEvent(e);
            });
            //detect mouse usage
            jQuery(document).on('mouseover', function(e) {
                if (that.pointerEventLock) {
                    return;
                }
                that.setPointerEventLockTimeout();
                that.triggerMouseEvent(e);
            });
        }
    },
    init: function() {
        this.initEnv();
        this.wirePointerDetection();
    }
};
jQuery(document).ready(function() {
    PointerManager.init();
});


// ==============================================
// PDP - image zoom - needs to be available outside document.ready scope
// ==============================================

var ProductMediaManager = {
    IMAGE_ZOOM_THRESHOLD: 20,
    imageWrapper: null,

    destroyZoom: function() {
        jQuery('.zoomContainer').remove();
        jQuery('.product-image-gallery .gallery-image').removeData('elevateZoom');
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

        var configzoom = {
            zoomType: 'lens',
            lensSize: 300,
            lensShape: 'round',
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
        targetImage = jQuery(targetImage);
        targetImage.addClass('gallery-image');

        ProductMediaManager.destroyZoom();

        var imageGallery = jQuery('.product-image-gallery');
        
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
        jQuery('.product-image-thumbs .thumb-link').click(function(e) {
            e.preventDefault();
            var jlink = jQuery(this);
            var target = jQuery('#image-' + jlink.data('image-index'));

            ProductMediaManager.swapImage(target);
        });

        var target = jQuery('#image-0');
        ProductMediaManager.swapImage(target);
    },

    initZoom: function() {
        ProductMediaManager.createZoom(jQuery(".gallery-image.visible")); //set zoom on first image
    },

    init: function() {
        ProductMediaManager.imageWrapper = jQuery('.product-img-box');

        // Re-initialize zoom on viewport size change since resizing causes problems with zoom and since smaller
        // viewport sizes shouldn't have zoom

        jQuery(window).resize(function(event) {
            ProductMediaManager.initZoom();
        });

        ProductMediaManager.initZoom();

        ProductMediaManager.wireThumbnails();

        jQuery(document).trigger('product-media-loaded', ProductMediaManager);
    }
};

jQuery(document).ready(function() {
    ProductMediaManager.init();
});