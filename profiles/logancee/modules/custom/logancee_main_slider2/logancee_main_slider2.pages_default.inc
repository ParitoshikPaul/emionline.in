<?php
/**
 * @file
 * logancee_main_slider2.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function logancee_main_slider2_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frontpage_main2';
  $page->task = 'page';
  $page->admin_title = 'frontpage main2';
  $page->admin_description = '';
  $page->path = 'front-main2';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_frontpage_main2__panel';
  $handler->task = 'page';
  $handler->subtask = 'frontpage_main2';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'front front-main2',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 2,
          2 => 3,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'slider',
        ),
        'parent' => 'main',
        'class' => 'main-slide-wrap row',
        'hide_empty' => 0,
      ),
      'slider' => array(
        'type' => 'region',
        'title' => 'Slider main',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'main-slide-inner',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'newsletter',
        ),
        'parent' => 'main',
        'class' => 'main-container',
        'hide_empty' => 0,
      ),
      'newsletter' => array(
        'type' => 'region',
        'title' => 'Teasers',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'container',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'newsletter_',
        ),
        'parent' => 'main',
        'class' => 'main-brands container',
        'hide_empty' => 0,
      ),
      'newsletter_' => array(
        'type' => 'region',
        'title' => 'Brands',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'center' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '6',
          'sm' => '5',
          'md' => '5',
          'lg' => '5',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'slider' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'slide_sidebar' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '4',
          'md' => '3',
          'lg' => '3',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'static_2' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '6',
          'sm' => '7',
          'md' => '7',
          'lg' => '7',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'static_collection_video' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '6',
          'sm' => '7',
          'md' => '7',
          'lg' => '7',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'newsletter' => array(
        'css_id' => '',
        'css_class' => 'widget-collection-style1',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
          'md' => '12',
          'lg' => '12',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'newsletter__' => array(
        'css_id' => '',
        'css_class' => 'subscribe clearfix',
        'column' => array(
          'xs' => '12',
          'sm' => '6',
          'md' => '6',
          'lg' => '6',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '3',
          'md' => '0',
          'lg' => '0',
        ),
        'push' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
        'pull' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '0',
          'lg' => '0',
        ),
      ),
      'newsletter_' => NULL,
    ),
    'slider' => array(
      'style' => 'bootstrap_region',
    ),
    'slide_sidebar' => array(
      'style' => 'bootstrap_region',
    ),
    'style' => 'bootstrap_region',
    'center' => array(
      'style' => 'bootstrap_region',
    ),
    'static_2' => array(
      'style' => 'bootstrap_region',
    ),
    'static_collection_video' => array(
      'style' => 'bootstrap_region',
    ),
    'newsletter' => array(
      'style' => 'bootstrap_region',
    ),
    'newsletter_' => array(
      'style' => '-1',
    ),
    'newsletter__' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ce6c5fdd-32d8-4b3a-9ec8-7c315f155209';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-13809cfa-e765-4903-9fdf-397dc7a3b4de';
    $pane->panel = 'newsletter';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>[item class=&quot;main-heading&quot;]</p><p>[item class=&quot;heading-title&quot;]</p><h2>Awesome out product</h2><p>[/item]</p><p>[/item]</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '13809cfa-e765-4903-9fdf-397dc7a3b4de';
    $display->content['new-13809cfa-e765-4903-9fdf-397dc7a3b4de'] = $pane;
    $display->panels['newsletter'][0] = 'new-13809cfa-e765-4903-9fdf-397dc7a3b4de';
    $pane = new stdClass();
    $pane->pid = 'new-d9648b11-8a02-445d-a339-33d9f8acf278';
    $pane->panel = 'newsletter';
    $pane->type = 'views';
    $pane->subtype = 'tags_category_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'widget-collection-style3',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd9648b11-8a02-445d-a339-33d9f8acf278';
    $display->content['new-d9648b11-8a02-445d-a339-33d9f8acf278'] = $pane;
    $display->panels['newsletter'][1] = 'new-d9648b11-8a02-445d-a339-33d9f8acf278';
    $pane = new stdClass();
    $pane->pid = 'new-383c9774-34d8-4f40-8083-278f88bdb348';
    $pane->panel = 'newsletter';
    $pane->type = 'views';
    $pane->subtype = 'product_teasers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '383c9774-34d8-4f40-8083-278f88bdb348';
    $display->content['new-383c9774-34d8-4f40-8083-278f88bdb348'] = $pane;
    $display->panels['newsletter'][2] = 'new-383c9774-34d8-4f40-8083-278f88bdb348';
    $pane = new stdClass();
    $pane->pid = 'new-fb1fd6ec-f8c7-495f-8ce9-0a38aa075104';
    $pane->panel = 'newsletter';
    $pane->type = 'views';
    $pane->subtype = 'product_teasers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'fb1fd6ec-f8c7-495f-8ce9-0a38aa075104';
    $display->content['new-fb1fd6ec-f8c7-495f-8ce9-0a38aa075104'] = $pane;
    $display->panels['newsletter'][3] = 'new-fb1fd6ec-f8c7-495f-8ce9-0a38aa075104';
    $pane = new stdClass();
    $pane->pid = 'new-ae448a5c-89c1-41f7-a0bc-3d83a13f29c2';
    $pane->panel = 'newsletter';
    $pane->type = 'views';
    $pane->subtype = 'product_teasers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'ae448a5c-89c1-41f7-a0bc-3d83a13f29c2';
    $display->content['new-ae448a5c-89c1-41f7-a0bc-3d83a13f29c2'] = $pane;
    $display->panels['newsletter'][4] = 'new-ae448a5c-89c1-41f7-a0bc-3d83a13f29c2';
    $pane = new stdClass();
    $pane->pid = 'new-772b3d6f-96c0-41a5-84a1-36b94b854c75';
    $pane->panel = 'newsletter_';
    $pane->type = 'views';
    $pane->subtype = 'clients';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'main-brands-inner',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '772b3d6f-96c0-41a5-84a1-36b94b854c75';
    $display->content['new-772b3d6f-96c0-41a5-84a1-36b94b854c75'] = $pane;
    $display->panels['newsletter_'][0] = 'new-772b3d6f-96c0-41a5-84a1-36b94b854c75';
    $pane = new stdClass();
    $pane->pid = 'new-b31d64f7-5d68-4683-90c8-ab2f95e79618';
    $pane->panel = 'slider';
    $pane->type = 'views';
    $pane->subtype = 'front_main_slider2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b31d64f7-5d68-4683-90c8-ab2f95e79618';
    $display->content['new-b31d64f7-5d68-4683-90c8-ab2f95e79618'] = $pane;
    $display->panels['slider'][0] = 'new-b31d64f7-5d68-4683-90c8-ab2f95e79618';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage_main2'] = $page;

  return $pages;

}
