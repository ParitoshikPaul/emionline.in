<?php
/**
 * @file
 * logancee_blog.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function logancee_blog_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_pattern';
  $strongarm->value = 'blog/[node:title]';
  $export['pathauto_node_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tvi_vocab_blog_tags';
  $strongarm->value = array(
    'is_default' => TRUE,
    'type' => 'vocab',
    'xid' => 'blog_tags',
    'status' => 1,
    'view_name' => 'blog_tag_terms',
    'display' => 'page_1',
    'pass_arguments' => 1,
  );
  $export['tvi_vocab_blog_tags'] = $strongarm;

  return $export;
}
