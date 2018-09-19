<?php
/**
 * @file
 * logancee_payments.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function logancee_payments_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access checkout'.
  $permissions['access checkout'] = array(
    'name' => 'access checkout',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'view own commerce_order entities'.
  $permissions['view own commerce_order entities'] = array(
    'name' => 'view own commerce_order entities',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_order entities of bundle commerce_order'.
  $permissions['view own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'view own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_order',
  );

  return $permissions;
}
