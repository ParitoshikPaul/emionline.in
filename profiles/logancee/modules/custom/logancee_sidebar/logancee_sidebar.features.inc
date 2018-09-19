<?php
/**
 * @file
 * logancee_sidebar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function logancee_sidebar_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
