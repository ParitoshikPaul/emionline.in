<?php
/**
 * @file
 * logancee_carousel.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function logancee_carousel_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'front_carousel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'front carousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'front main slider';
  $handler->display->display_options['css_class'] = 'widget-block main-carousel';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Background image */
  $handler->display->display_options['fields']['field_background_image']['id'] = 'field_background_image';
  $handler->display->display_options['fields']['field_background_image']['table'] = 'field_data_field_background_image';
  $handler->display->display_options['fields']['field_background_image']['field'] = 'field_background_image';
  $handler->display->display_options['fields']['field_background_image']['label'] = '';
  $handler->display->display_options['fields']['field_background_image']['element_class'] = 'img-responsive';
  $handler->display->display_options['fields']['field_background_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_background_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_background_image']['settings'] = array(
    'image_style' => 'front_carousel',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Button */
  $handler->display->display_options['fields']['field_button']['id'] = 'field_button';
  $handler->display->display_options['fields']['field_button']['table'] = 'field_data_field_button';
  $handler->display->display_options['fields']['field_button']['field'] = 'field_button';
  $handler->display->display_options['fields']['field_button']['label'] = '';
  $handler->display->display_options['fields']['field_button']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_button']['element_class'] = 'btn-ex hover-effect02';
  $handler->display->display_options['fields']['field_button']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="carousel-content block-center">
<div class="text-large h3">[title]</div>
<div class="text-normal">[body]</div>
[field_button]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'front_carousel' => 'front_carousel',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'front-slide-carousel';
  $translatables['front_carousel'] = array(
    t('Master'),
    t('front main slider'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="carousel-content block-center">
<div class="text-large h3">[title]</div>
<div class="text-normal">[body]</div>
[field_button]
</div>'),
    t('Page'),
  );
  $export['front_carousel'] = $view;

  return $export;
}
