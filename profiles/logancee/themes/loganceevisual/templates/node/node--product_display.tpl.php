<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup templates
 */
?>

<?php

global $base_url;

$product_name = $node->title;
$product_price = render($content['product:commerce_price']);
$short_description = render($content['field_short_description']);
$product_size = render($content['field_size_guide']);
$product_custom_text = render($content['field_custom_text']);
$product_description = render($content['body']);
$product_sku = render($content['product:sku']);
$product_add_to_cart = render($content['field_product_reference']);
$product_stock = $content['product:commerce_stock']['#items'][0]['value'];
$product_in_stock = $product_stock > 0;
$product_wholesales = isset($content['wholesales_add_to_cart']) ? $content['wholesales_add_to_cart'] : NULL;

$path = $base_url . '/' . drupal_get_path_alias("node/" . $node->nid);

$nr_ratings = $content['field_rate']['#items'][0]['count'];

?>


<div id="product-view" class="product-view">
  <div class="product-essential row">
    <div class="col-lg-12 col-md-12 col-sm-12 col-xs-12">
      <div class="row">
        <div class="col-xs-12 col-sm-5 col-md-4 col-lg-4">
          <div class="product-img-box">
            <?php print render($content['product:field_product_image']); ?>
          </div>
        </div>
        <div class="col-xs-12 col-sm-7 col-md-8 col-lg-8">
          <div class="product-shop-view">
            <div class="top-product-name row">
              <div class="col-xs-9 col-sm-9 col-md-9 col-lg-9"><h1
                  class="product-name"
                  itemprop="name"><?php print $product_name; ?></h1></div>
              <div class="col-xs-3 col-sm-3 col-md-3 col-lg-3">
                <div class="product-more">
                  <div class="product-prev-next">
                    <ul class="row"></ul>
                  </div>
                </div>
              </div>
            </div>
            <div class="ratings">

              <div class="rating-fivestar">
                <?php print render($content['field_rate']); ?>
              </div>

              <p class="rating-links">
                <a
                  href="#reviews"><?php print $nr_ratings . " " . t("Review(s)"); ?></a>
                <span class="separator">|</span>
                <a class="add-review"
                   href="#reviews"><?php print t("Add Your Review"); ?></a></p>
            </div>
            <div>
              <div class="product-type-data clearfix">
                <div class="wapper-view">
                  <div class="price-box">
                    <?php if (!empty($original_price)): ?>
                      <span class="old-price" id="product-price-16">
                        <span class="price">
                          <?php print $original_price; ?>
                        </span>
                    </span>
                    <?php endif; ?>
                    <span class="regular-price" id="product-price-16">
                        <span class="price">
                          <?php print $product_price; ?>
                        </span>
                    </span>
                  </div>

                  <?php if (!empty($product_wholesales)): ?>

                    <?php if ($product_in_stock): ?>

                      <span class="availability-only">
                      <a id="stock-qty-16"
                         title="Only <?php print $product_stock; ?> left">
                        <i
                          class="icon-layers"></i><span><?php print t("Only"); ?>
                          <strong><?php print render($content['product:commerce_stock']); ?></strong> <?php print t("left"); ?></span>
                      </a>
                    </span>
                      <span class="avaible-space">|</span>

                    <?php endif; ?>

                    <?php if ($product_in_stock): ?>
                      <p
                        class="availability in-stock"><?php print t("Availability:"); ?>
                        <span
                          class="in-stock1"><?php print t("In Stock"); ?></span>
                      </p>
                    <?php else: ?>
                      <p
                        class="availability out-of-stock"><?php print t("Availability:"); ?>
                        <span
                          class="in-stock1"><?php print t("Out of Stock"); ?></span>
                      </p>
                    <?php endif; ?>

                  <?php endif; ?>
                </div>
              </div>
              <meta itemprop="priceCurrency" content="USD">
              <meta itemprop="price" content="120">
            </div>
            <div class="short-description">
              <div class="desc std" itemprop="description">
                <?php print $short_description; ?>
              </div>
            </div>
            <div class="product-options" id="product-options-wrapper">
              <dl>
                <dd class="clearfix swatch-attr">
                  <div class="input-box">
                    <?php if (empty($product_wholesales)): ?>
                      <?php print $product_add_to_cart; ?>
                    <?php else: ?>
                      <?php print $product_wholesales; ?>
                    <?php endif; ?>
                  </div>
                </dd>
              </dl>
            </div>
            <div class="sku">
              <span
                class="title"><strong><?php print t("SKU:"); ?></strong></span>
              <span class="value"><strong><?php print $product_sku; ?></strong></span>
            </div>
            <div class="social-share">
              <div class="title"><?php print t("Share:"); ?></div>
              <ul class="social-listing">
                <li class="facebook">
                  <a data-toggle="tooltip" data-placement="top"
                     class="trasition-all"
                     title="<?php print t("Share on Facebook") ?>"
                     href="javascript:void(0)"
                     target="_blank" rel="nofollow"
                     onclick="window.open('//www.facebook.com/sharer/sharer.php?u='+'<?php print $path; ?>');return false;"><i
                      class="fa fa-facebook"></i>
                  </a></li>
                <li class="twitter">
                  <a data-toggle="tooltip" data-placement="top"
                     class="trasition-all" href="javascript:void(0)"
                     title="<?php print t("Share on Twitter") ?>"
                     rel="nofollow" target="_blank"
                     onclick="window.open('//twitter.com/share?text=<?php print htmlentities($product_name); ?>&amp;url=<?php print $path; ?>');return false;"><i
                      class="fa fa-twitter"></i>
                  </a></li>
                <li class="linkedin">
                  <a data-toggle="tooltip" data-placement="top"
                     class="trasition-all" href="javascript:void(0)"
                     title="<?php print t("Share on LinkedIn") ?>"
                     rel="nofollow" target="_blank"
                     onclick="window.open('//www.linkedin.com/shareArticle?mini=true&amp;url=<?php print $path; ?>?title=<?php print htmlentities($product_name); ?>');return false;"><i
                      class="fa fa-linkedin"></i>
                  </a></li>
                <li class="tumblr">
                  <a data-toggle="tooltip" data-placement="top"
                     class="trasition-all" href="javascript:void(0)"
                     title="<?php print t("Share on Tumblr") ?>"
                     rel="nofollow" target="_blank"
                     onclick="window.open('//www.tumblr.com/share/link?url=<?php print $path; ?>?name=<?php print htmlentities($product_name); ?>');return false;"><i
                      class="fa fa-tumblr"></i>
                  </a></li>
                <li class="google-plus">
                  <a data-toggle="tooltip" data-placement="top"
                     class="trasition-all" href="javascript:void(0)"
                     title="<?php print t("Share on Google Plus") ?>"
                     rel="nofollow"
                     target="_blank"
                     onclick="window.open('//plus.google.com/share?url=<?php print $path; ?>');return false;"><i
                      class="fa fa-google-plus"></i>
                  </a></li>
                <li class="pinterest">
                  <a data-toggle="tooltip" data-placement="top"
                     class="trasition-all" href="javascript:void(0)"
                     title="<?php print t("Pin this") ?>"
                     rel="nofollow" target="_blank"
                     onclick="window.open('//pinterest.com/pin/create/button/?url=<?php print $path; ?>?media=http%3A%2F%2Fdemo.cactusthemes.com%2Fnewstube%2Fwp-content%2Fuploads%2F2015%2F06%2F014-Surf-woman.jpg&amp;description=<?php print htmlentities($product_name); ?>');return false;"><i
                      class="fa fa-pinterest"></i>
                  </a></li>
                <li class="email">
                  <a data-toggle="tooltip" data-placement="top"
                     class="trasition-all" href="javascript:void(0)"
                     target="_blank"
                     onclick="window.open('//mail.google.com/mail/u/0/?view=cm&amp;fs=1&amp;to&amp;su=<?php print htmlentities($product_name); ?>&amp;body=<?php print $path; ?>?ui=2&amp;tf=1');return false;"
                     title="<?php print t("Gmail") ?>"><i
                      class="fa fa-envelope"></i>
                  </a></li>
              </ul>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
  <div class="product-collateral">
    <ul class="product-tabs clearfix">
      <li id="product_tabs_description" class="active first">
        <a href="#description" id="description-tab" role="tab" data-toggle="tab"
           aria-controls="description"
           aria-expanded="true"><?php print t("Product Description"); ?></a>
      </li>
      <li id="product_tabs_tabreviews" class="">
        <a href="#reviews" id="description-tab" role="tab" data-toggle="tab"
           aria-controls="reviews"
           aria-expanded="false"><?php print t("Reviews"); ?></a>
      </li>
      <?php if (!empty($product_size)): ?>
        <li id="product_tabs_product_cms_block1" class="">
          <a href="#size" id="size-tab" role="tab" data-toggle="tab"
             aria-controls="size"
             aria-expanded="false"><?php print t("Size guide"); ?></a>
        </li>
      <?php endif; ?>
      <?php if (!empty($product_custom_text)): ?>
        <li id="product_tabs_product_cms_block2" class=" last">
          <a href="#custom" id="custom-tab" role="tab" data-toggle="tab"
             aria-controls="custom"
             aria-expanded="false"><?php print t("Custom Tab"); ?></a>
        </li>
      <?php endif; ?>
      <?php if (!empty($product_wholesales)): ?>
        <li id="product_tabs_product_cms_block2" class=" last">
          <a href="#wholesales" id="custom-tab" role="tab" data-toggle="tab"
             aria-controls="custom"
             aria-expanded="false"><?php print t("Wholesales cart"); ?></a>
        </li>
      <?php endif; ?>
    </ul>
    <div class="title-divider">&nbsp;</div>
    <div id="productTabContent" class="tab-content">

      <div role="tabpanel" class="tab-pane fade active in" id="description"
           aria-labelledby="description-tab">
        <h2 class="acctab"
            id="acctab-description"><?php print t("Product Description"); ?>
          <span
            class="toggle-class visible-xs-block"></span>
        </h2>

        <div class="product-tabs-content"
             id="product_tabs_description_contents">
          <div class="product-tabs-content-inner clearfix">
            <div class="box-collateral box-desc">
              <div class="std">
                <?php print $product_description; ?>
              </div>
            </div>
          </div>
        </div>

      </div>

      <div role="tabpanel" class="tab-pane fade" id="reviews"
           aria-labelledby="reviews-tab">
        <h2 class="acctab" id="acctab-tabreviews"><?php print t("Reviews"); ?>
          <span
            class="toggle-class visible-xs-block"></span></h2>

        <div class="product-tabs-content form-list-review"
             id="product_tabs_tabreviews_contents">
          <div class="product-tabs-content-inner clearfix">
            <div class="box-collateral box-reviews input-box"
                 id="customer-reviews">
              <?php print render($content['comments']); ?>
            </div>
          </div>
        </div>
      </div>

      <div role="tabpanel" class="tab-pane fade" id="size"
           aria-labelledby="size-tab">
        <h2 class="acctab"
            id="acctab-product_cms_block1"><?php print t("Size Guide"); ?><span
            class="toggle-class visible-xs-block"></span></h2>

        <div class="product-tabs-content"
             id="product_tabs_product_cms_block1_contents">
          <div class="product-tabs-content-inner clearfix">
            <div class="box-collateral box-custom">
              <div class="std">
                <?php print $product_size; ?>
              </div>
            </div>
          </div>
        </div>
      </div>

      <div role="tabpanel" class="tab-pane fade" id="custom"
           aria-labelledby="custom-tab">
        <h2 class="acctab"
            id="acctab-product_cms_block2"><?php print t("Custom Tab"); ?><span
            class="toggle-class visible-xs-block"></span></h2>

        <div class="product-tabs-content"
             id="product_tabs_product_cms_block2_contents">
          <div class="product-tabs-content-inner clearfix">
            <div class="box-collateral box-custom">
              <div class="std">
                <?php print $product_custom_text; ?>
              </div>
            </div>
          </div>
        </div>
      </div>

      <div role="tabpanel" class="tab-pane fade" id="wholesales"
           aria-labelledby="custom-tab">
        <h2 class="acctab"
            id="acctab-product_cms_block2"><?php print t("Wholesales cart"); ?>
          <span
            class="toggle-class visible-xs-block"></span></h2>

        <div class="product-tabs-content"
             id="product_tabs_product_cms_block2_contents">
          <div class="product-tabs-content-inner clearfix">
            <div class="box-collateral box-custom">
              <div class="std">
                <?php print $product_wholesales; ?>
              </div>
            </div>
          </div>
        </div>
      </div>

    </div>
  </div>
</div>