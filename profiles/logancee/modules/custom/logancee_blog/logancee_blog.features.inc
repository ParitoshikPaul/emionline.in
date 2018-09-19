<?php
/**
 * @file
 * logancee_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function logancee_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function logancee_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function logancee_blog_image_default_styles() {
  $styles = array();

  // Exported image style: blog_items.
  $styles['blog_items'] = array(
    'label' => 'Blog items',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 580,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
