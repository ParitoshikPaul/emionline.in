/*
 * @file
 * Loganceevisual js
 *
 * Js behaviours for fundedvisual theme. All functionality just enhances default behaviour so that disabling javacript
 * does not destoy the app.
 */

(function ($) {

  "use strict";

  $(document).ready(function(){

    $("#fullpage").once('fullpageprocessed', function () {

      if ($('#fullpage').length) {
        $('#fullpage > div').addClass('section moveDown');
        $('body').addClass('home04');
      }

      $(this).fullpage({
        navigation: true,
        navigationPosition: 'right',
        sectionSelector: '.section',
        onLeave: function (index, nextIndex, direction) {
          if (index == 1) {
            $('.sticky-wrapper').addClass('is-sticky');
          }
          if (nextIndex == 1) {
            $('.sticky-wrapper').removeClass('is-sticky');
          }
        }
      });

      //init parallax
      $(this).find('.widget-block').each(function () {

        var $image_url = $(this).find('.block-static.row').attr('data-image-url');

        var config = {
          kenburns: {
            "enable": false,
            "type": "image",
            "overlay": "none",
            "video": {"src": null, "volume": false},
            "image": {
            }
          },
          parallax: {
            "enable": true,
            "type": "image",
            "overlay": "none",
            "video": {"src": null, "volume": false},
            "image": {
              "src": $image_url,
              "fit": "cover",
              "repeat": "no-repeat",
              "height": "100%"
            }
          }
        };

        new Typo.Widget($(this).attr('id'),config);

      });

    });

  });

})(jQuery);
