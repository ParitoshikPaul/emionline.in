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

if (!empty($content['product:field_product_image']['#items'][0]['uri'])) {
  $image_1_uri = image_style_url('product_teaser', $content['product:field_product_image']['#items'][0]['uri']);
}
if (!empty($content['product:field_product_image']['#items'][1]['uri'])) {
  $image_2_uri = image_style_url('product_teaser', $content['product:field_product_image']['#items'][1]['uri']);
}

?>

<div class="product-item">
  <div class="product-img-grid">
    <div class="product-show">
      <a href="<?php print $path; ?>"
         title="<?php print $product_name; ?>" class="product-image">
        <div class="product-label">
          <?php if (!empty($original_price)): ?>
            <div class="product-percent-label">
              <span><?php print "-" . $discount . t("% Off"); ?></span></div>
            <div class="product-new-label">
              <span><?php print t("Sale"); ?></span></div>
          <?php endif; ?>
        </div>

          <span class="front margin-image">
            <?php if(!empty($image_1_uri)): ?>
            <img class="img-responsive owl-lazy front-img"
                 data-src="<?php print $image_1_uri; ?>"
                 src="<?php print $image_1_uri; ?>"
                 alt="<?php print $product_name; ?>" width="540" height="720"
                 style="opacity: 1;">
            <?php endif; ?>
          </span>
          <span class="product-img-additional back margin-image">
            <?php if(!empty($image_2_uri)): ?>
              <img class="img-responsive alt-img lazy"
                   src="<?php print $image_2_uri; ?>"
                   alt="<?php print $product_name; ?>" width="540" height="720"
                   style="display: block;">
            <?php endif; ?>
          </span>
      </a>

      <div class="product-show-box">
        <div class="main-quickview">
          <button type="button" data-placement="top" title="Quick view"
                  class="btn show-quickview" data-id="24"><span><i
                aria-hidden="true" class="icon_plus"></i></span></button>
          <a class="product-quickview"
             href="<?php print $path; ?>"
             data-id="quickview-24" style="display:none"><?php print t("Quick view"); ?></a>
        </div>
      </div>
    </div>
  </div>
  <div class="top-actions-inner">
    <h3 class="product-name">
      <a href="<?php print $path; ?>"
         title="<?php print $product_name; ?>"><?php print $product_name; ?></a>
    </h3>

    <div class="table">
      <div class="price-box">
        <?php if (!empty($original_price)): ?>
          <span class="old-price" id="product-price-16">
              <span class="price">
                <?php print $original_price; ?>
              </span>
          </span>
        <?php endif; ?>
        <div class="regular-price">
          <div class="price"><?php print $product_price; ?></div>
        </div>
      </div>
    </div>
  </div>
  <div class="typo-actions clearfix">
    <div class="addtocart">
      <?php print $product_add_to_cart; ?>
    </div>
  </div>
</div>