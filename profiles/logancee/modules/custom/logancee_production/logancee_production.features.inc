<?php
/**
 * @file
 * logancee_production.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function logancee_production_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
