<?php
/**
 * @file
 * logancee_fluid.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function logancee_fluid_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frontpage_fluid';
  $page->task = 'page';
  $page->admin_title = 'frontpage fluid';
  $page->admin_description = '';
  $page->path = 'front-fluid';
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
  $handler->name = 'page_frontpage_fluid__panel_context_8536a29a-0050-4aeb-a63a-45cb5d709f0e';
  $handler->task = 'page';
  $handler->subtask = 'frontpage_fluid';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'front-carousel',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
          1 => 'main-row',
          2 => 3,
          3 => 4,
          4 => 5,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'featured_boxes',
        ),
        'parent' => 'main',
        'class' => 'block-wrap block-top-01 col-lg-12  col-md-12  col-sm-12  col-xs-12  ',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'slider',
        ),
        'parent' => 'main',
        'class' => 'main-slide-wrap',
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
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'teasers',
        ),
        'parent' => 'main',
        'class' => 'container',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'newsletter___events',
          1 => 'newsletter',
        ),
        'parent' => 'main',
        'class' => 'main-newsletter home03-newsletter',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'teasers' => array(
        'type' => 'region',
        'title' => 'Teasers',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => 'main-content-inner clearfix',
        'hide_empty' => 0,
      ),
      'featured_boxes' => array(
        'type' => 'region',
        'title' => 'Featured boxes',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'block-static row',
        'hide_empty' => 0,
      ),
      'newsletter___events' => array(
        'type' => 'region',
        'title' => 'events',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'newsletter' => array(
        'type' => 'region',
        'title' => 'Newsletter',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => ' main-newsletter-inner',
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
        'css_class' => 'subscribe right-newsletter',
        'column' => array(
          'xs' => '12',
          'sm' => '6',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '2',
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
      'newsletter_' => array(
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
      'slider' => NULL,
      'welcome_block' => array(
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
      'block_icon_1' => array(
        'css_id' => '',
        'css_class' => 'images no-padding',
        'column' => array(
          'xs' => '12',
          'sm' => '6',
          'md' => '6',
          'lg' => '6',
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
      'block_icon_2' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '4',
          'md' => '4',
          'lg' => '4',
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
      'block_icon_3' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '6',
          'md' => '6',
          'lg' => '6',
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
      'block_feature_1' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '6',
          'md' => '6',
          'lg' => '6',
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
      'block_feature_2' => array(
        'css_id' => '',
        'css_class' => 'images no-padding',
        'column' => array(
          'xs' => '12',
          'sm' => '6',
          'md' => '6',
          'lg' => '6',
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
      'featured_boxes' => NULL,
      'teasers' => array(
        'css_id' => '',
        'css_class' => 'widget-collection-style1 col-lg-offset-1 col-lg-10',
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
      'newsletter___events' => array(
        'css_id' => '',
        'css_class' => 'left-newsletter',
        'column' => array(
          'xs' => '12',
          'sm' => '6',
          'md' => '4',
          'lg' => '4',
        ),
        'offset' => array(
          'xs' => '0',
          'sm' => '0',
          'md' => '1',
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
    ),
    'slider' => array(
      'style' => 'naked',
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
      'style' => 'bootstrap_region',
    ),
    'welcome_block' => array(
      'style' => 'bootstrap_region',
    ),
    'block_icon_1' => array(
      'style' => 'bootstrap_region',
    ),
    'block_icon_2' => array(
      'style' => 'bootstrap_region',
    ),
    'block_icon_3' => array(
      'style' => 'bootstrap_region',
    ),
    'teasers' => array(
      'style' => 'bootstrap_region',
    ),
    'block_feature_1' => array(
      'style' => 'bootstrap_region',
    ),
    'block_feature_2' => array(
      'style' => 'bootstrap_region',
    ),
    'featured_boxes' => array(
      'style' => 'naked',
    ),
    'newsletter___events' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '<none>';
  $display->uuid = 'ce6c5fdd-32d8-4b3a-9ec8-7c315f155209';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2948ca26-28eb-4834-a52c-2a2583ca1ced';
    $pane->panel = 'featured_boxes';
    $pane->type = 'views';
    $pane->subtype = 'featured_boxes';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2948ca26-28eb-4834-a52c-2a2583ca1ced';
    $display->content['new-2948ca26-28eb-4834-a52c-2a2583ca1ced'] = $pane;
    $display->panels['featured_boxes'][0] = 'new-2948ca26-28eb-4834-a52c-2a2583ca1ced';
    $pane = new stdClass();
    $pane->pid = 'new-46d437d7-6e32-4478-9339-7172d884dbb6';
    $pane->panel = 'newsletter';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h2><span>Newletter</span></h2><p>[item class=&quot;text&quot;]Subscribe to the LoganCee mailing list to receive updates on new arrivals, specialoffers and other discount information.[/item]</p>',
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
    $pane->uuid = '46d437d7-6e32-4478-9339-7172d884dbb6';
    $display->content['new-46d437d7-6e32-4478-9339-7172d884dbb6'] = $pane;
    $display->panels['newsletter'][0] = 'new-46d437d7-6e32-4478-9339-7172d884dbb6';
    $pane = new stdClass();
    $pane->pid = 'new-1c73b12e-f5a4-4fae-b2f9-7b7669e89def';
    $pane->panel = 'newsletter';
    $pane->type = 'block';
    $pane->subtype = 'mailchimp_signup-logancee_signup';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
      'css_class' => 'input-box',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1c73b12e-f5a4-4fae-b2f9-7b7669e89def';
    $display->content['new-1c73b12e-f5a4-4fae-b2f9-7b7669e89def'] = $pane;
    $display->panels['newsletter'][1] = 'new-1c73b12e-f5a4-4fae-b2f9-7b7669e89def';
    $pane = new stdClass();
    $pane->pid = 'new-3f848fb2-10ef-4e0a-8a50-afbe0df191f4';
    $pane->panel = 'newsletter___events';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="newletters-box clearfix"><h2 class="title"><span>Coming Events</span></h2><ul><li class="news-item"><div class="blog-title h4"><a href="#">Trending of fashion 2015 - Hipster Style So Cool</a></div><div class="blog-info"><span>Post at Jul 17, 2015 | by Admin</span></div></li><li class="news-item"><div class="blog-title h4"><a href="#">Festival of LoganCee’s Sandal with C-Knightz Art</a></div><div class="blog-info"><span>Post at Jul 17, 2015 | by Admin</span></div></li><li class="news-item"><div class="blog-title h4"><a href="#">Mix your style follow “ ton-sur-ton ”</a></div><div class="blog-info"><span>Post at Jul 17, 2015 | by Admin</span></div></li></ul></div>',
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
    $pane->uuid = '3f848fb2-10ef-4e0a-8a50-afbe0df191f4';
    $display->content['new-3f848fb2-10ef-4e0a-8a50-afbe0df191f4'] = $pane;
    $display->panels['newsletter___events'][0] = 'new-3f848fb2-10ef-4e0a-8a50-afbe0df191f4';
    $pane = new stdClass();
    $pane->pid = 'new-10ab47d5-8049-4a92-a789-5656045a1119';
    $pane->panel = 'slider';
    $pane->type = 'views';
    $pane->subtype = 'fluid_main_slider';
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
    $pane->uuid = '10ab47d5-8049-4a92-a789-5656045a1119';
    $display->content['new-10ab47d5-8049-4a92-a789-5656045a1119'] = $pane;
    $display->panels['slider'][0] = 'new-10ab47d5-8049-4a92-a789-5656045a1119';
    $pane = new stdClass();
    $pane->pid = 'new-63b257ad-8915-4a7e-bedd-c8f9da02ca1f';
    $pane->panel = 'teasers';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '63b257ad-8915-4a7e-bedd-c8f9da02ca1f';
    $display->content['new-63b257ad-8915-4a7e-bedd-c8f9da02ca1f'] = $pane;
    $display->panels['teasers'][0] = 'new-63b257ad-8915-4a7e-bedd-c8f9da02ca1f';
    $pane = new stdClass();
    $pane->pid = 'new-acf882bf-8b02-4c25-8544-5118110b1cd4';
    $pane->panel = 'teasers';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'acf882bf-8b02-4c25-8544-5118110b1cd4';
    $display->content['new-acf882bf-8b02-4c25-8544-5118110b1cd4'] = $pane;
    $display->panels['teasers'][1] = 'new-acf882bf-8b02-4c25-8544-5118110b1cd4';
    $pane = new stdClass();
    $pane->pid = 'new-395e8c8e-99d3-4606-b213-687204d5436c';
    $pane->panel = 'teasers';
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
    $pane->uuid = '395e8c8e-99d3-4606-b213-687204d5436c';
    $display->content['new-395e8c8e-99d3-4606-b213-687204d5436c'] = $pane;
    $display->panels['teasers'][2] = 'new-395e8c8e-99d3-4606-b213-687204d5436c';
    $pane = new stdClass();
    $pane->pid = 'new-e2f06c7f-a487-49e1-bdb2-6d032328082f';
    $pane->panel = 'teasers';
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
    $pane->uuid = 'e2f06c7f-a487-49e1-bdb2-6d032328082f';
    $display->content['new-e2f06c7f-a487-49e1-bdb2-6d032328082f'] = $pane;
    $display->panels['teasers'][3] = 'new-e2f06c7f-a487-49e1-bdb2-6d032328082f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage_fluid'] = $page;

  return $pages;

}
