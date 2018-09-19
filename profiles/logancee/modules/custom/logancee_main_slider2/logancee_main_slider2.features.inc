<?php
/**
 * @file
 * logancee_main_slider2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function logancee_main_slider2_ctools_plugin_api($module = NULL, $api = NULL) {
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
function logancee_main_slider2_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function logancee_main_slider2_node_info() {
  $items = array(
    'front_main_slider2' => array(
      'name' => t('Front main slider2'),
      'base' => 'node_content',
      'description' => t('Frontpage main slider 2 item'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
