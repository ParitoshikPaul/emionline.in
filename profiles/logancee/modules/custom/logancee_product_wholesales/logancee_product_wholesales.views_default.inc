<?php
/**
 * @file
 * logancee_product_wholesales.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function logancee_product_wholesales_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'product_wholesale';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Product wholesale';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product wholesale';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'add_to_cart_quantity' => 'add_to_cart_quantity',
    'title' => 'title',
    'sku' => 'sku',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'add_to_cart_quantity' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sku' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_product_reference']['id'] = 'field_product_reference';
  $handler->display->display_options['relationships']['field_product_reference']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_product_reference']['field'] = 'field_product_reference';
  $handler->display->display_options['relationships']['field_product_reference']['required'] = TRUE;
  /* Field: Commerce Product: Quantity input field */
  $handler->display->display_options['fields']['add_to_cart_quantity']['id'] = 'add_to_cart_quantity';
  $handler->display->display_options['fields']['add_to_cart_quantity']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['add_to_cart_quantity']['field'] = 'add_to_cart_quantity';
  $handler->display->display_options['fields']['add_to_cart_quantity']['label'] = 'Quantity';
  $handler->display->display_options['fields']['add_to_cart_quantity']['default_quantity'] = '0';
  $handler->display->display_options['fields']['add_to_cart_quantity']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_quantity']['display_path'] = 1;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Product: SKU */
  $handler->display->display_options['fields']['sku']['id'] = 'sku';
  $handler->display->display_options['fields']['sku']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['sku']['field'] = 'sku';
  $handler->display->display_options['fields']['sku']['link_to_product'] = 0;
  /* Field: Commerce Product: Stock */
  $handler->display->display_options['fields']['commerce_stock']['id'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['table'] = 'field_data_commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['field'] = 'commerce_stock';
  $handler->display->display_options['fields']['commerce_stock']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_product_reference';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'config_product' => 'config_product',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['product_wholesale'] = array(
    t('Master'),
    t('Product wholesale'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Node referencing products from field_product_reference'),
    t('Quantity'),
    t('Title'),
    t('SKU'),
    t('Stock'),
    t('All'),
    t('Block'),
  );
  $export['product_wholesale'] = $view;

  return $export;
}
