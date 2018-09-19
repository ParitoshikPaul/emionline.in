<?php
/**
 * @file
 * logancee_products.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function logancee_products_commerce_product_default_types() {
  $items = array(
    'config_product' => array(
      'type' => 'config_product',
      'name' => 'Configurable product',
      'description' => 'Configurable products for sale',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function logancee_products_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function logancee_products_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function logancee_products_image_default_styles() {
  $styles = array();

  // Exported image style: product_display.
  $styles['product_display'] = array(
    'label' => 'product_display',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 370,
          'height' => 493,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_teaser.
  $styles['product_teaser'] = array(
    'label' => 'product_teaser',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 540,
          'height' => 720,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: product_thumb.
  $styles['product_thumb'] = array(
    'label' => 'product_thumb',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function logancee_products_node_info() {
  $items = array(
    'product_display' => array(
      'name' => t('Product Display'),
      'base' => 'node_content',
      'description' => t('A any product type display'),
      'has_title' => '1',
      'title_label' => t('Product name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
