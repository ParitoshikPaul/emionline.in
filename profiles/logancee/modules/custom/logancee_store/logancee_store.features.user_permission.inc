<?php
/**
 * @file
 * logancee_store.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function logancee_store_user_default_permissions() {
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

  return $permissions;
}
