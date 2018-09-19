<?php
/**
 * @file
 * logancee_catalog.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function logancee_catalog_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_shop_category_pattern';
  $strongarm->value = 'shop/[term:name]';
  $export['pathauto_taxonomy_term_shop_category_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tvi_vocab_shop_category';
  $strongarm->value = array(
    'is_default' => FALSE,
    'type' => 'vocab',
    'xid' => 'shop_category',
    'status' => 1,
    'view_name' => 'shop_category_terms',
    'display' => 'page_1',
    'pass_arguments' => 1,
  );
  $export['tvi_vocab_shop_category'] = $strongarm;

  return $export;
}
