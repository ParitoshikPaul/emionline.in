<?php

global $base_url;

$product_name = $node->title;
$product_price = render($content['product:commerce_price']);
$short_description = render($content['field_short_description']);
$product_size = render($content['field_size_guide']);
$product_custom_text = render($content['field_custom_text']);
$product_description = render($content['body']);
$product_sku = $content['product:sku']['#sku'];
$product_add_to_cart = render($content['field_product_reference']);

$path = url("node/" . $node->nid);

if (isset($content['product:field_product_image']['#items'][0]['uri'])) {
  $image_1_uri = image_style_url('product_teaser', $content['product:field_product_image']['#items'][0]['uri']);
}
if (isset($content['product:field_product_image']['#items'][1]['uri'])) {
  $image_2_uri = image_style_url('product_teaser', $content['product:field_product_image']['#items'][1]['uri']);
}

?>

<div>

  <div class="col-xs-4 col-sm-4 col-md-4 col-lg-4">
    <div class="product-list-img">
      <div class="product-show">
        <a href="<?php print $path; ?>"
           title="<?php print $product_name; ?>" class="product-image">

          <span class="front margin-image">
            <?php if (!empty($image_1_uri)): ?>
              <img class="img-responsive owl-lazy front-img"
                   data-src="<?php print $image_1_uri; ?>"
                   src="<?php print $image_1_uri; ?>"
                   alt="<?php print $product_name; ?>" width="540" height="720"
                   style="opacity: 1;">
            <?php endif; ?>
          </span>
          <span class="product-img-additional back margin-image">
            <?php if (!empty($image_2_uri)): ?>
            <img class="img-responsive alt-img lazy"
                 src="<?php print $image_2_uri; ?>"
                 alt="<?php print $product_name; ?>" width="540" height="720"
                 style="display: block;">                                </span>
          <?php endif; ?>
        </a>

        <div class="product-show-box">
          <div class="main-quickview">
            <button type="button" data-placement="top" title="Quick view"
                    class="btn show-quickview" data-id="24"><span><i
                  aria-hidden="true" class="icon_plus"></i></span></button>
            <a class="product-quickview"
               href="<?php print $path; ?>"
               data-id="quickview-24" style="display:none">Quick view</a>
          </div>
        </div>
      </div>
    </div>
  </div>

  <div class="col-xs-8 col-sm-8 col-md-8 col-lg-8">
    <div class="product-shop">
      <h2 class="product-name">
        <a href="<?php print $path; ?>"
           title="<?php print $product_name; ?>"><?php print $product_name; ?></a>
      </h2>

      <div class="product-value">


        <div class="price-box">
          <?php if (!empty($original_price)): ?>
            <span class="old-price" id="product-price-16">
              <span class="price">
                <?php print $original_price; ?>
              </span>
          </span>
          <?php endif; ?>
          <span class="regular-price" id="product-price-4">
                <span class="price"><?php print $product_price; ?>
                </span>
            </span>
        </div>

        <div class="ratings">
          <div class="rating-box">
            <div class="rating" style="width:80%"></div>
          </div>
          <span class="amount"><a href="#"
                                  onclick="var t = opener ? opener.window : window; t.location.href='http://logancee.typostores.com/downloadable-music.html?___SID=U'; return false;">1
              Review(s)</a>
          </span>
        </div>

        <div class="desc std">
          <?php print $short_description; ?>
        </div>

      </div>

    </div>
  </div>

</div>