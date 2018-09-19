<?php
/**
 * @file
 * logancee_jewelry.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function logancee_jewelry_default_page_manager_pages() {

  global $base_url;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frontpage_jewelry';
  $page->task = 'page';
  $page->admin_title = 'frontpage jewelry';
  $page->admin_description = '';
  $page->path = 'front-jewelry';
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
  $handler->name = 'page_frontpage_jewelry__panel_context_345e8760-568e-45d6-a65f-31098dc74e91';
  $handler->task = 'page';
  $handler->subtask = 'frontpage_jewelry';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'front-simple',
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
          1 => 3,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'right',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'brands',
        ),
        'parent' => 'main',
        'class' => 'main-brands',
        'hide_empty' => 0,
      ),
      'brands' => array(
        'type' => 'region',
        'title' => 'Brands',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
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
          'xs' => '12',
          'sm' => '12',
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
          'xs' => '12',
          'sm' => '12',
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
      'static_collection_video' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
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
      'brands' => NULL,
      'left' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
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
      'right' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
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
      'style' => 'naked',
    ),
    'newsletter__' => array(
      'style' => 'bootstrap_region',
    ),
    'brands' => array(
      'style' => '-1',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ce6c5fdd-32d8-4b3a-9ec8-7c315f155209';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c45d481f-3e62-4500-b56d-a9683fe36458';
    $pane->panel = 'brands';
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
    $pane->uuid = 'c45d481f-3e62-4500-b56d-a9683fe36458';
    $display->content['new-c45d481f-3e62-4500-b56d-a9683fe36458'] = $pane;
    $display->panels['brands'][0] = 'new-c45d481f-3e62-4500-b56d-a9683fe36458';
    $pane = new stdClass();
    $pane->pid = 'new-7ef642a1-0fc5-4a53-a452-e5de3f01f845';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="col-xs-12 col-sm-12 col-md-12 col-lg-12">
<div class="block-jw-text jw-text1">
<div class="block-prent block-center">
<h2 class="title"><span>make a<br>different !</span></h2>
<div class="text desc std"><strong>Logance’s Jewelry</strong> brings unique new designs and sophisticated.<br>We always focus on creating trendy products and offers stunning scenery for users.</div>
<a class="btn-ctn h4" href="#"><span>Continue </span><span class="arrow_right">&nbsp;</span></a></div>
</div>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7ef642a1-0fc5-4a53-a452-e5de3f01f845';
    $display->content['new-7ef642a1-0fc5-4a53-a452-e5de3f01f845'] = $pane;
    $display->panels['left'][0] = 'new-7ef642a1-0fc5-4a53-a452-e5de3f01f845';
    $pane = new stdClass();
    $pane->pid = 'new-286a87d2-81ae-4957-a767-86fd5e362100';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="col-xs-12 col-sm-12 col-md-12 col-lg-12">
<div class="block-jw jw-5 bg-blue" style="background-image: url(' .  $base_url . '/profiles/logancee/themes/loganceevisual/images/block09_05.jpg);"><a class="btn-ex block-center hover-effect02" href="#"><span>Shop Now</span></a></div>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '286a87d2-81ae-4957-a767-86fd5e362100';
    $display->content['new-286a87d2-81ae-4957-a767-86fd5e362100'] = $pane;
    $display->panels['left'][1] = 'new-286a87d2-81ae-4957-a767-86fd5e362100';
    $pane = new stdClass();
    $pane->pid = 'new-c877ffda-0cfb-4600-b829-b9a2c9bf51b8';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="col-xs-12 col-sm-12 col-md-6 col-lg-6"><div class="block-jw jw-6 bg-gray" style="background-image: url(' .  $base_url . '/profiles/logancee/themes/loganceevisual/images/block09_06.jpg);"><a class="btn-ex block-center hover-effect02" href="#"><span>Shop Now</span></a></div></div>
<div class="col-xs-12 col-sm-12 col-md-6 col-lg-6"><div class="block-jw-text jw-text2"><div class="block-prent block-center"><h2 class="title">about us</h2><div class="text desc std">We are a team of creative and<br />develop PSD Template...</div><a class="btn-ctn h4" href="#"><span>Continue </span><span class="arrow_right">&nbsp;</span></a></div></div></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c877ffda-0cfb-4600-b829-b9a2c9bf51b8';
    $display->content['new-c877ffda-0cfb-4600-b829-b9a2c9bf51b8'] = $pane;
    $display->panels['left'][2] = 'new-c877ffda-0cfb-4600-b829-b9a2c9bf51b8';
    $pane = new stdClass();
    $pane->pid = 'new-e5f457ce-6920-4db1-9281-c1d3c10eea67';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="col-xs-12 col-sm-12 col-md-12 col-lg-12">
<div class="block-jw jw-1 bg-orange" style="background-image: url(' .  $base_url . '/profiles/logancee/themes/loganceevisual/images/block09_01.jpg);"><a class="btn-ex block-center hover-effect02" href="#"><span>Shop Now</span></a></div>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e5f457ce-6920-4db1-9281-c1d3c10eea67';
    $display->content['new-e5f457ce-6920-4db1-9281-c1d3c10eea67'] = $pane;
    $display->panels['right'][0] = 'new-e5f457ce-6920-4db1-9281-c1d3c10eea67';
    $pane = new stdClass();
    $pane->pid = 'new-4f702188-5ca1-40fa-8912-4836e2062b74';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="col-xs-12 col-sm-12 col-md-12 col-lg-12">
<div class="block-jw jw-2 bg-brown" style="background-image: url(' .  $base_url . '/profiles/logancee/themes/loganceevisual/images/block09_02.jpg);"><a class="btn-ex block-center hover-effect02" href="#"><span>Shop Now</span></a></div>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4f702188-5ca1-40fa-8912-4836e2062b74';
    $display->content['new-4f702188-5ca1-40fa-8912-4836e2062b74'] = $pane;
    $display->panels['right'][1] = 'new-4f702188-5ca1-40fa-8912-4836e2062b74';
    $pane = new stdClass();
    $pane->pid = 'new-42bb654c-5340-42c5-b2c8-93c1fa1bd06e';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="col-xs-12 col-sm-12 col-md-6 col-lg-6"><div class="block-jw-text jw-text2"><div class="block-prent block-center"><div class="quote"><span class="icon_quotations">&nbsp;</span></div><div class="text desc std">A lot of the jewelry that I wear are fan gifts because they&#39;re so awesome and they give me great presents.</div><div class="user-name">taylor swift</div></div></div></div>
<div class="col-xs-12 col-sm-12 col-md-6 col-lg-6"><div class="block-jw jw-3 bg-gray" style="background-image: url(' .  $base_url . '/profiles/logancee/themes/loganceevisual/images/block09_03.jpg);"><a class="btn-ex block-center hover-effect02" href="#"><span>Shop Now</span></a></div></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '42bb654c-5340-42c5-b2c8-93c1fa1bd06e';
    $display->content['new-42bb654c-5340-42c5-b2c8-93c1fa1bd06e'] = $pane;
    $display->panels['right'][2] = 'new-42bb654c-5340-42c5-b2c8-93c1fa1bd06e';
    $pane = new stdClass();
    $pane->pid = 'new-5343f48c-8c88-4c56-8c06-0da6043cc52b';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="col-xs-12 col-sm-12 col-md-12 col-lg-12">
<div class="block-jw jw-4 bg-green" style="background-image: url(' .  $base_url . '/profiles/logancee/themes/loganceevisual/images/block09_04.jpg);"><a class="btn-ex block-center hover-effect02" href="#"><span>Shop Now</span></a></div>
</div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '5343f48c-8c88-4c56-8c06-0da6043cc52b';
    $display->content['new-5343f48c-8c88-4c56-8c06-0da6043cc52b'] = $pane;
    $display->panels['right'][3] = 'new-5343f48c-8c88-4c56-8c06-0da6043cc52b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage_jewelry'] = $page;

  return $pages;

}
