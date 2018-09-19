<?php
/**
 * @file
 * logancee_carousel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function logancee_carousel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function logancee_carousel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function logancee_carousel_image_default_styles() {
  $styles = array();

  // Exported image style: front_carousel.
  $styles['front_carousel'] = array(
    'label' => 'front_carousel',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 710,
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
function logancee_carousel_node_info() {
  $items = array(
    'front_carousel' => array(
      'name' => t('Front carousel'),
      'base' => 'node_content',
      'description' => t('Frontpage carousel items'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
