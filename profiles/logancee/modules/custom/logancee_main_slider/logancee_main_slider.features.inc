<?php
/**
 * @file
 * logancee_main_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function logancee_main_slider_ctools_plugin_api($module = NULL, $api = NULL) {
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
function logancee_main_slider_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function logancee_main_slider_node_info() {
  $items = array(
    'front_main_slider' => array(
      'name' => t('Front main slider'),
      'base' => 'node_content',
      'description' => t('Frontpage main slider item'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
