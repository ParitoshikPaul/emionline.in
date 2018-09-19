<?php
/**
 * @file
 * logancee_clients.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function logancee_clients_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'clients';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Clients';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Clients';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'owl-item item';
  $handler->display->display_options['style_options']['class'] = 'owl-carousel owl-theme ';
  $handler->display->display_options['style_options']['wrapper_class'] = 'widget-product-brands ';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['type'] = 'text_plain';
  /* Field: Content: Client Image */
  $handler->display->display_options['fields']['field_client_image']['id'] = 'field_client_image';
  $handler->display->display_options['fields']['field_client_image']['table'] = 'field_data_field_client_image';
  $handler->display->display_options['fields']['field_client_image']['field'] = 'field_client_image';
  $handler->display->display_options['fields']['field_client_image']['label'] = '';
  $handler->display->display_options['fields']['field_client_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_client_image']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_client_image']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_client_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_client_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_client_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'clients' => 'clients',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['clients'] = array(
    t('Master'),
    t('Clients'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['clients'] = $view;

  return $export;
}
