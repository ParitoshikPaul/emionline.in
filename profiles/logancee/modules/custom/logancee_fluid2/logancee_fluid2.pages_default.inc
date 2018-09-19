<?php
/**
 * @file
 * logancee_fluid2.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function logancee_fluid2_default_page_manager_pages() {
  
  global $base_url;
  
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frontpage_fluid2';
  $page->task = 'page';
  $page->admin_title = 'frontpage fluid2';
  $page->admin_description = '';
  $page->path = 'front-fluid2';
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
  $handler->name = 'page_frontpage_fluid2__panel_context_8536a29a-0050-4aeb-a63a-45cb5d709f0e';
  $handler->task = 'page';
  $handler->subtask = 'frontpage_fluid2';
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
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'blocks',
        ),
        'parent' => 'main',
        'class' => 'main-top',
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
      'blocks' => array(
        'type' => 'region',
        'title' => 'Blocks',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'main-top-inner',
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
      'blocks' => NULL,
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
    'blocks' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '<none>';
  $display->uuid = 'ce6c5fdd-32d8-4b3a-9ec8-7c315f155209';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e2e31c05-dbe3-46dc-ab49-d74cfb31df32';
    $pane->panel = 'blocks';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="block-static clearfix"><div class="owl-carousel owl-theme "><div class="block-content clearfix"><div class="interior-block-slide" style="background-image: url(' . $base_url . '/profiles/logancee/themes/loganceevisual/images/interior/box1-item1.jpg);"><div class="interior-inner"><h4 class="title"><a href="#">bookshelf <span class="price">$100</span></a></h4><div class="text">Lorem ipsum dolor sit amet, consectetur uilon adipis cing elit. Quisque sed scelerisque arcu.</div></div></div></div><div class="block-content clearfix"><div class="interior-block-slide" style="background-image: url(' . $base_url . '/profiles/logancee/themes/loganceevisual/images/interior/box1-item2.jpg)"><div class="interior-inner"><h4 class="title"><a href="#">bookshelf <span class="price">$90</span></a></h4><div class="text">Lorem ipsum dolor sit amet, consectetur uilon adipis cing elit. Quisque sed scelerisque arcu.</div></div></div></div><div class="block-content clearfix"><div class="interior-block-slide" style="background-image: url(' . $base_url . '/profiles/logancee/themes/loganceevisual/images/interior/box1-item3.jpg)"><div class="interior-inner"><h4 class="title"><a href="#">bookshelf <span class="price">$90</span></a></h4><div class="text">Lorem ipsum dolor sit amet, consectetur uilon adipis cing elit. Quisque sed scelerisque arcu.</div></div></div></div></div></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'widget-887db7af8b53a14bdbf868eb5c5ef7d1',
      'css_class' => 'widget-block interior-block-slide-wrap col-xs-12 col-sm-6 col-md-5 col-lg-4 no-padding',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e2e31c05-dbe3-46dc-ab49-d74cfb31df32';
    $display->content['new-e2e31c05-dbe3-46dc-ab49-d74cfb31df32'] = $pane;
    $display->panels['blocks'][0] = 'new-e2e31c05-dbe3-46dc-ab49-d74cfb31df32';
    $pane = new stdClass();
    $pane->pid = 'new-a8cd6221-9827-4e99-835d-1ed692b4264a';
    $pane->panel = 'blocks';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="block-static row"><div class="block-wrap"><div class="col-lg-12  col-md-12  col-sm-12  col-xs-12  "><div class="interior-block-static"><div class="interior-inner block-center"><h3 class="title">Talbe collections</h3><div class="text hidden-xs">Lorem ipsum dolor sit amet, consectetur adipiscing elit. sque sed scelerisque arcu. Sed vel luctus elit, at ultricies odion tuniomi loi. Aliquam vehicula.</div><div class="btn-view"><a class="btn-readmore hover-effect07" href="#"><span>View Now !</span></a></div></div></div></div></div></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'widget-cf92d7638c59ebc5c014d4e7cade19c2',
      'css_class' => 'widget-block interior-block-static-wrap col-xs-12 col-sm-6 col-md-7 col-lg-8 no-padding',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a8cd6221-9827-4e99-835d-1ed692b4264a';
    $display->content['new-a8cd6221-9827-4e99-835d-1ed692b4264a'] = $pane;
    $display->panels['blocks'][1] = 'new-a8cd6221-9827-4e99-835d-1ed692b4264a';
    $pane = new stdClass();
    $pane->pid = 'new-5afde20f-51b0-41af-8ef5-e700accdcc1e';
    $pane->panel = 'blocks';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="block-static clearfix"><div class="owl-carousel owl-theme "><div class="block-content clearfix"><div class="interior-block-slide" style="background-image: url(' . $base_url . '/profiles/logancee/themes/loganceevisual/images/interior/box2-item1.jpg);"><div class="interior-inner"><h4 class="title"><a href="#">ceramic light <span class="price">$50</span></a></h4><div class="text">Lorem ipsum dolor sit amet, consectetur uilon adipis cing elit. Quisque sed scelerisque arcu.</div></div></div></div><div class="block-content clearfix"><div class="interior-block-slide" style="background-image: url(' . $base_url . '/profiles/logancee/themes/loganceevisual/images/interior/box2-item2.jpg);"><div class="interior-inner"><h4 class="title"><a href="#">ceramic light <span class="price">$60</span></a></h4><div class="text">Lorem ipsum dolor sit amet, consectetur uilon adipis cing elit. Quisque sed scelerisque arcu.</div></div></div></div><div class="block-content clearfix"><div class="interior-block-slide" style="background-image: url(' . $base_url . '/profiles/logancee/themes/loganceevisual/images/interior/box2-item3.jpg);"><div class="interior-inner"><h4 class="title"><a href="#">ceramic light <span class="price">$80</span></a></h4><div class="text">Lorem ipsum dolor sit amet, consectetur uilon adipis cing elit. Quisque sed scelerisque arcu.</div></div></div></div></div></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'widget-0d0fe0b05d56e54afb3cdf64008d43c0',
      'css_class' => 'widget-block interior-block-slide-wrap col-xs-12 col-sm-6 col-md-5 col-lg-4 no-padding col-sm-push-6 col-md-push-7 col-lg-push-8',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5afde20f-51b0-41af-8ef5-e700accdcc1e';
    $display->content['new-5afde20f-51b0-41af-8ef5-e700accdcc1e'] = $pane;
    $display->panels['blocks'][2] = 'new-5afde20f-51b0-41af-8ef5-e700accdcc1e';
    $pane = new stdClass();
    $pane->pid = 'new-52012ea4-0880-4e5c-9db4-09151c6b15f3';
    $pane->panel = 'blocks';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="block-static row"><div class="block-wrap"><div class="col-lg-12  col-md-12  col-sm-12  col-xs-12  "><div class="interior-block-static"><div class="interior-inner"><h3 class="title">pendant light</h3><div class="text hidden-xs">Lorem ipsum dolor sit amet, consectetur adipiscing elit. sque sed scelerisque arcu. Sed vel luctus elit, at ultricies odion tuniomi loi. Aliquam vehicula.</div><div class="btn-view"><a class="btn-readmore hover-effect07" href="#"><span>View Now !</span></a></div></div></div></div></div></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'widget-13d5f744791375a2bbdec53b91a82788',
      'css_class' => 'interior-block-static-wrap col-xs-12 col-sm-6 col-md-7 col-lg-8 no-padding col-sm-pull-6 col-md-pull-5 col-lg-pull-4',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '52012ea4-0880-4e5c-9db4-09151c6b15f3';
    $display->content['new-52012ea4-0880-4e5c-9db4-09151c6b15f3'] = $pane;
    $display->panels['blocks'][3] = 'new-52012ea4-0880-4e5c-9db4-09151c6b15f3';
    $pane = new stdClass();
    $pane->pid = 'new-81a47755-b30f-48e3-94a9-c04c662ba581';
    $pane->panel = 'blocks';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="block-static row"><div class="block-wrap"><div class="col-lg-12  col-md-12  col-sm-12  col-xs-12  "><div class="interior-block-static"><div class="interior-inner"><h3 class="title">ilian bottle <span class="price">$45</span></h3><div class="text hidden-xs">Lorem ipsum dolor sit amet, consectetur adipiscing elit. sque sed scelerisque arcu. Sed vel luctus elit, at ultricies odion tuniomi loi. Aliquam vehicula.</div><div class="hidden-xs"><span>&nbsp;<span class="fa fa-caret-right">&nbsp;</span>&nbsp;</span>Sed vel luctus elit, at ultricies odion</div><div class="text hidden-xs"><span>&nbsp;<span class="fa fa-caret-right">&nbsp;</span>&nbsp;</span>Lorem ipsum dolor sit amet consectetur</div><div class="btn-view"><a class="btn-readmore hover-effect07" href="#"><span>View Now !</span></a></div></div></div></div></div></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'widget-9da8150947658a9e9ddd757d4b424366',
      'css_class' => 'widget-block interior-block-static-wrap col-xs-12 col-sm-12 col-md-12 col-lg-12 no-padding',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '81a47755-b30f-48e3-94a9-c04c662ba581';
    $display->content['new-81a47755-b30f-48e3-94a9-c04c662ba581'] = $pane;
    $display->panels['blocks'][4] = 'new-81a47755-b30f-48e3-94a9-c04c662ba581';
    $pane = new stdClass();
    $pane->pid = 'new-f3736882-e681-4cda-b51b-166d8d123afd';
    $pane->panel = 'blocks';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="block-static row"><div class="block-wrap"><div class="col-lg-12  col-md-12  col-sm-12  col-xs-12  "><div class="col-xs-12 col-sm-4 col-md-4 col-lg-4 no-padding"><div class="interior-block-slide" style="background-image: url(' . $base_url . '/profiles/logancee/themes/loganceevisual/images/interior/img-block4.jpg);"><div class="interior-inner"><h4 class="title"><a href="#">box bookshelf <span class="price">$65</span></a></h4><div class="text">Lorem ipsum dolor sit amet, consectetur uilon adipis cing elit. Quisque sed scelerisque arcu.</div></div></div></div><div class="col-xs-12 col-sm-4 col-md-4 col-lg-4 no-padding"><div class="interior-block-slide" style="background-image: url(' . $base_url . '/profiles/logancee/themes/loganceevisual/images/interior/img-block5.jpg);"><div class="interior-inner"><h4 class="title"><a href="#">bowl decor <span class="price">$25</span></a></h4><div class="text">Lorem ipsum dolor sit amet, consectetur uilon adipis cing elit. Quisque sed scelerisque arcu.</div></div></div></div><div class="col-xs-12 col-sm-4 col-md-4 col-lg-4 no-padding"><div class="interior-block-slide" style="background-image: url(' . $base_url . '/profiles/logancee/themes/loganceevisual/images/interior/img-block6.jpg);"><div class="interior-inner"><h4 class="title"><a href="#">storage stone <span class="price">$40</span></a></h4><div class="text">Lorem ipsum dolor sit amet, consectetur uilon adipis cing elit. Quisque sed scelerisque arcu.</div></div></div></div></div></div></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'widget-f0fce9eef15762587de5aaa732531587',
      'css_class' => 'widget-block interior-block-static-wrap col-xs-12 col-sm-12 col-md-12 col-lg-12 no-padding',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'f3736882-e681-4cda-b51b-166d8d123afd';
    $display->content['new-f3736882-e681-4cda-b51b-166d8d123afd'] = $pane;
    $display->panels['blocks'][5] = 'new-f3736882-e681-4cda-b51b-166d8d123afd';
    $pane = new stdClass();
    $pane->pid = 'new-0f362357-9ea4-40ca-8bfc-a9a68d2ac607';
    $pane->panel = 'blocks';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="block-static clearfix"><div class="owl-carousel owl-theme "><div class="block-content clearfix"><div class="interior-block-slide" style="background-image: url(' . $base_url . '/profiles/logancee/themes/loganceevisual/images/interior/box3-item1.jpg);"><div class="interior-inner"><h4 class="title"><a href="#">simple sofa<span class="price">$320</span></a></h4><div class="text">Lorem ipsum dolor sit amet, consectetur uilon adipis cing elit. Quisque sed scelerisque arcu.</div></div></div></div><div class="block-content clearfix"><div class="interior-block-slide" style="background-image: url(' . $base_url . '/profiles/logancee/themes/loganceevisual/images/interior/box3-item2.jpg);"><div class="interior-inner"><h4 class="title"><a href="#">simple sofa<span class="price">$300</span></a></h4><div class="text">Lorem ipsum dolor sit amet, consectetur uilon adipis cing elit. Quisque sed scelerisque arcu.</div></div></div></div><div class="block-content clearfix"><div class="interior-block-slide" style="background-image: url(' . $base_url . '/profiles/logancee/themes/loganceevisual/images/interior/box3-item3.jpg);"><div class="interior-inner"><h4 class="title"><a href="#">minimal sofa<span class="price">$200</span></a></h4><div class="text">Lorem ipsum dolor sit amet, consectetur uilon adipis cing elit. Quisque sed scelerisque arcu.</div></div></div></div></div></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'widget-8fdaaf6fb38e6217d5d59f2086ddb6f1',
      'css_class' => 'widget-block interior-block-slide-wrap col-xs-12 col-sm-6 col-md-5 col-lg-4 no-padding',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '0f362357-9ea4-40ca-8bfc-a9a68d2ac607';
    $display->content['new-0f362357-9ea4-40ca-8bfc-a9a68d2ac607'] = $pane;
    $display->panels['blocks'][6] = 'new-0f362357-9ea4-40ca-8bfc-a9a68d2ac607';
    $pane = new stdClass();
    $pane->pid = 'new-e9e3d384-811a-49f0-8673-277d70fe6571';
    $pane->panel = 'blocks';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="block-static row"><div class="block-wrap"><div class="col-lg-12  col-md-12  col-sm-12  col-xs-12  "><div class="interior-block-static"><div class="interior-inner left"><h3 class="title">minimal sofa</h3><div class="text hidden-xs">Lorem ipsum dolor sit amet, consectetur adipiscing elit. sque sed scelerisque arcu. Sed vel luctus elit, at ultricies odion tuniomi loi. Aliquam vehicula.</div><div class="btn-view"><a class="btn-readmore hover-effect07" href="#"><span>View Now !</span></a></div></div></div></div></div></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'widget-3a4fb67a45323fdc82005d45d465b291',
      'css_class' => 'widget-block interior-block-static-wrap col-xs-12 col-sm-6 col-md-7 col-lg-8 no-padding',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'e9e3d384-811a-49f0-8673-277d70fe6571';
    $display->content['new-e9e3d384-811a-49f0-8673-277d70fe6571'] = $pane;
    $display->panels['blocks'][7] = 'new-e9e3d384-811a-49f0-8673-277d70fe6571';
    $pane = new stdClass();
    $pane->pid = 'new-b11f2d11-6a69-498d-b5ee-43c26bf20e4a';
    $pane->panel = 'blocks';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="block-static row"><div class="block-wrap"><div class="col-lg-12  col-md-12  col-sm-12  col-xs-12  "><div class="interior-block-static"><div class="interior-inner"><h3 class="title">unique &amp; morden</h3><div class="text hidden-xs">We alway focus on create unique and morden design for each other products. With elements simple,clean and minimalist, user experience of client will become easiet.</div><div class="author"><strong>C-KNIGHTZ ART</strong> - CEO Founder</div></div></div></div></div></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'widget-62666a96f0e3acbe46e30e9e6325bf9e',
      'css_class' => 'widget-block interior-block-static-wrap col-xs-12 col-sm-12 col-md-12 col-lg-12 no-padding',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'b11f2d11-6a69-498d-b5ee-43c26bf20e4a';
    $display->content['new-b11f2d11-6a69-498d-b5ee-43c26bf20e4a'] = $pane;
    $display->panels['blocks'][8] = 'new-b11f2d11-6a69-498d-b5ee-43c26bf20e4a';
    $pane = new stdClass();
    $pane->pid = 'new-10ab47d5-8049-4a92-a789-5656045a1119';
    $pane->panel = 'slider';
    $pane->type = 'views';
    $pane->subtype = 'fluid2_main_slider';
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage_fluid2'] = $page;

  return $pages;

}
