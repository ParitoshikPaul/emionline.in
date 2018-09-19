<?php
/**
 * @file
 * logancee_products.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function logancee_products_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'manage own wish list'.
  $permissions['manage own wish list'] = array(
    'name' => 'manage own wish list',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_wishlist',
  );

  // Exported permission: 'view any commerce_product entity'.
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_product',
  );

  return $permissions;
}
