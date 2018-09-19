<?php
/**
 * @file
 * node.preprocess.php
 *
 * node preprocess function
 */

/**
 *Implementation of hook_preprocess_node
 */

function loganceevisual_preprocess_node(&$vars){

  $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type;

  if($vars['view_mode'] == 'teaser') {
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__teaser';
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->nid . '__teaser';
  }
  if($vars['view_mode'] == 'list') {
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->type . '__list';
    $vars['theme_hook_suggestions'][] = 'node__' . $vars['node']->nid . '__list';
  }

  if($vars['type'] == 'product_display') {
    $vars['content']['product:sku']['#access'] = TRUE;

    //calculate discounted price if applicable
    if(!empty($vars['content']['product:commerce_price']['#items'][0]['original'])){
      //get the currency in the current currency
      $amount = $vars['content']['product:commerce_price']['#items'][0]['original']['amount'];
      $currency_original = $vars['content']['product:commerce_price']['#items'][0]['original']['currency_code'];
      $currency_user = commerce_multicurrency_get_user_currency_code();
      $value_original = commerce_multicurrency_conversion($amount,$currency_original,$currency_user);
      $amount_original = $value_original;
      $amount_new = $vars['content']['product:commerce_price']['#items'][0]['amount'];

      //check if original price is different
      if($amount_original > $amount_new){
        $discount = ($amount_new * $amount_original)/100;
        $discount = ceil($discount/10000);
        $vars['discount'] = $discount;
        $price_old = commerce_currency_format($value_original,$currency_user);
        $vars['original_price'] = $price_old;
      }
    }
    if($vars['view_mode'] == 'teaser') {
      //Either show only wishlist or full add to cart form.
      $teaser_form_type = theme_get_setting('teaser_cart_form_widget');
      if(empty($teaser_form_type) || $teaser_form_type == "wishlist"){
        unset($vars['content']['field_product_reference'][0]['submit']);
        unset($vars['content']['field_product_reference'][0]['attributes']);
      }
    }
  }
}