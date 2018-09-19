<?php
/**
 * @file
 * logancee_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function logancee_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-customer-care.
  $menus['menu-customer-care'] = array(
    'menu_name' => 'menu-customer-care',
    'title' => 'Customer care',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-menu-information.
  $menus['menu-menu-information'] = array(
    'menu_name' => 'menu-menu-information',
    'title' => 'Menu Information',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Customer care');
  t('Main menu');
  t('Menu Information');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');

  return $menus;
}
