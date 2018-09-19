<?php
/**
 * @file
 * logancee_fluid.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function logancee_fluid_ctools_plugin_api($module = NULL, $api = NULL) {
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
function logancee_fluid_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function logancee_fluid_node_info() {
  $items = array(
    'fluid_boxes' => array(
      'name' => t('Fluid Boxes'),
      'base' => 'node_content',
      'description' => t('Fluid page featured boxes'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'fluid_slider' => array(
      'name' => t('Fluid slider'),
      'base' => 'node_content',
      'description' => t('Fluid slider items'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
