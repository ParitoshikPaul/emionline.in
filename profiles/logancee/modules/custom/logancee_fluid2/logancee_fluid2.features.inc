<?php
/**
 * @file
 * logancee_fluid2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function logancee_fluid2_ctools_plugin_api($module = NULL, $api = NULL) {
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
function logancee_fluid2_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function logancee_fluid2_node_info() {
  $items = array(
    'fluid2_slider' => array(
      'name' => t('fluid2 slider'),
      'base' => 'node_content',
      'description' => t('fluid2 slider items'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
