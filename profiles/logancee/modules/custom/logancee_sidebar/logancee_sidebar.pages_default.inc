<?php
/**
 * @file
 * logancee_sidebar.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function logancee_sidebar_default_page_manager_pages() {
  
  global $base_url;
  
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frontpage_sidebar';
  $page->task = 'page';
  $page->admin_title = 'frontpage sidebar';
  $page->admin_description = '';
  $page->path = 'front-sidebar';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_frontpage_sidebar__panel_context_5540cbf7-1e96-4464-bb44-228e8f829c46';
  $handler->task = 'page';
  $handler->subtask = 'frontpage_sidebar';
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
          1 => 'main-row',
          2 => 2,
        ),
        'parent' => 'canvas',
        'class' => 'col-xs-12 col-sm-8 col-md-9 col-lg-9',
        'hide_empty' => 0,
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'static_2',
        ),
        'parent' => 'main',
        'class' => 'container-main row',
        'hide_empty' => 0,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Static collection',
        'width' => '37.893462469733656',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'main-newsletter newsletter6 ',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar_slider',
          1 => 'slider',
        ),
        'parent' => 'main',
        'class' => 'main-slide row',
        'hide_empty' => 0,
      ),
      'slider' => array(
        'type' => 'region',
        'title' => 'Slider main',
        'width' => '62.150796669625116',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'main-slide-inner',
        'hide_empty' => 0,
      ),
      'static_2' => array(
        'type' => 'region',
        'title' => 'Static 2',
        'width' => 62.106537530266344,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'row',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'list',
          1 => 'bottom_container',
          2 => 'item',
          3 => 'item_',
        ),
        'parent' => 'main',
        'class' => 'main-bottom row',
        'hide_empty' => 0,
      ),
      'sidebar_slider' => array(
        'type' => 'region',
        'title' => 'sidebar slider',
        'width' => '37.849203330374884',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'bottom_container' => array(
        'type' => 'region',
        'title' => 'Item',
        'width' => '25.919651632310465',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'list' => array(
        'type' => 'region',
        'title' => 'Item',
        'width' => '24.64466627046785',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'item' => array(
        'type' => 'region',
        'title' => 'item',
        'width' => '25.931691005948625',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'item_' => array(
        'type' => 'region',
        'title' => 'Item',
        'width' => '23.503991091273058',
        'width_type' => '%',
        'parent' => '2',
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
        'css_class' => 'subscribe clearfix',
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
      'slider' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '8',
          'md' => '9',
          'lg' => '9',
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
        'css_class' => 'widget-product-tab widget-collection-style3',
        'column' => array(
          'xs' => '12',
          'sm' => '8',
          'md' => '9',
          'lg' => '9',
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
      'sidebar' => array(
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
      'sidebar_slider' => array(
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
      'bottom_container' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '6',
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
      'list' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '6',
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
      'item' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '6',
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
      'item_' => array(
        'css_id' => '',
        'css_class' => '',
        'column' => array(
          'xs' => '12',
          'sm' => '6',
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
    'sidebar' => array(
      'style' => 'bootstrap_region',
    ),
    'sidebar_slider' => array(
      'style' => 'bootstrap_region',
    ),
    'list' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom_container' => array(
      'style' => 'bootstrap_region',
    ),
    'item' => array(
      'style' => 'bootstrap_region',
    ),
    'item_' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ce6c5fdd-32d8-4b3a-9ec8-7c315f155209';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-71cb92a9-149e-44fc-bbf2-2b7d473c1d5a';
    $pane->panel = 'bottom_container';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>[item class=&quot;media list-features&quot;]<br />[item class=&quot;media-left&quot;][item type=&quot;span&quot; class=&quot;icon_star_alt&quot;][/item][/item][item class=&quot;media-body&quot;]<br />[item class=&quot;media-heading h4&quot;]More 400 brands[/item]<br />[item class=&quot;text desc std&quot;]Medela, Farlin, Combi,etc.[/item]<br />[/item]<br />[/item]</p>',
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
    $pane->uuid = '71cb92a9-149e-44fc-bbf2-2b7d473c1d5a';
    $display->content['new-71cb92a9-149e-44fc-bbf2-2b7d473c1d5a'] = $pane;
    $display->panels['bottom_container'][0] = 'new-71cb92a9-149e-44fc-bbf2-2b7d473c1d5a';
    $pane = new stdClass();
    $pane->pid = 'new-53729911-7cae-4172-9633-62046a5e118e';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="widget-block " id="widget-c8ac9ba586faca509af771ecddf68d1a"><div class="block-static row"><div class="block-wrap"><div class="col-lg-12  col-md-12  col-sm-12  col-xs-12  "><div class="hidden-xs block-sidebar hover-effect01" style="height: 420px; background: url(' . $base_url . '/profiles/logancee/themes/loganceevisual/images/img-sidebar.jpg) center center no-repeat; background-size: cover;"><h2 class="title"><a href="#">INK<br>glasses</a></h2></div><div class="hidden-xs block-sidebar" style="height: 219px; background-color: #000;"><div class="block-promo"><div class="title"><h2>Super Sale!</h2></div><div class="text">With 1000+ New Exclusive<br>Makedowns Products</div>
<a class="btn-link hover-effect07" href="#"><span>View Now</span></a></div></div></div></div></div>
  </div>',
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
    $pane->uuid = '53729911-7cae-4172-9633-62046a5e118e';
    $display->content['new-53729911-7cae-4172-9633-62046a5e118e'] = $pane;
    $display->panels['center'][0] = 'new-53729911-7cae-4172-9633-62046a5e118e';
    $pane = new stdClass();
    $pane->pid = 'new-74812fcc-ade8-49cd-9254-65764e7380a0';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'mailchimp_signup-logancee_signup';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Newsletter',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'main-newsletter-inner input-box',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '74812fcc-ade8-49cd-9254-65764e7380a0';
    $display->content['new-74812fcc-ade8-49cd-9254-65764e7380a0'] = $pane;
    $display->panels['center'][1] = 'new-74812fcc-ade8-49cd-9254-65764e7380a0';
    $pane = new stdClass();
    $pane->pid = 'new-437c566e-1b51-4dac-b8bf-2c6eb502399c';
    $pane->panel = 'item';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>[item class=&quot;media list-features&quot;]<br />[item class=&quot;media-left&quot;][item type=&quot;span&quot; class=&quot;icon_pin_alt&quot;][/item][/item][item class=&quot;media-body&quot;]<br />[item class=&quot;media-heading h4&quot;]Free shipping[/item]<br />[item class=&quot;text desc std&quot;]Free shipping on the world[/item]<br />[/item]<br />[/item]</p>',
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
    $pane->uuid = '437c566e-1b51-4dac-b8bf-2c6eb502399c';
    $display->content['new-437c566e-1b51-4dac-b8bf-2c6eb502399c'] = $pane;
    $display->panels['item'][0] = 'new-437c566e-1b51-4dac-b8bf-2c6eb502399c';
    $pane = new stdClass();
    $pane->pid = 'new-9c80f397-0032-482a-b21a-16c873ec869c';
    $pane->panel = 'item_';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>[item class=&quot;media list-features&quot;]<br />[item class=&quot;media-left&quot;][item type=&quot;span&quot; class=&quot;icon_currency&quot;][/item][/item][item class=&quot;media-body&quot;]<br />[item class=&quot;media-heading h4&quot;]Refund in 7 days[/item]<br />[item class=&quot;text desc std&quot;]100% free guarantee[/item]<br />[/item]<br />[/item]</p>',
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
    $pane->uuid = '9c80f397-0032-482a-b21a-16c873ec869c';
    $display->content['new-9c80f397-0032-482a-b21a-16c873ec869c'] = $pane;
    $display->panels['item_'][0] = 'new-9c80f397-0032-482a-b21a-16c873ec869c';
    $pane = new stdClass();
    $pane->pid = 'new-cc4d9dbb-1a18-4bc2-9f86-323e6e3de7cd';
    $pane->panel = 'list';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>[item class=&quot;media list-features&quot;]<br />[item class=&quot;media-left&quot;][item type=&quot;span&quot; class=&quot;icon_gift_alt&quot;][/item][/item][item class=&quot;media-body&quot;]<br />[item class=&quot;media-heading h4&quot;]+15.000 Products[/item]<br />[item class=&quot;text desc std&quot;]Best for Men &amp; Women[/item]<br />[/item]<br />[/item]</p>',
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
    $pane->uuid = 'cc4d9dbb-1a18-4bc2-9f86-323e6e3de7cd';
    $display->content['new-cc4d9dbb-1a18-4bc2-9f86-323e6e3de7cd'] = $pane;
    $display->panels['list'][0] = 'new-cc4d9dbb-1a18-4bc2-9f86-323e6e3de7cd';
    $pane = new stdClass();
    $pane->pid = 'new-e7ea0bf6-8645-4b21-b735-dc2939693b87';
    $pane->panel = 'sidebar_slider';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '[item class="main-slide-sidebar"]
[item class="cat-home"]
[item class="title h3"]Categories[/item]
<ul><li><a href="#"><span>accessories</span></a></li><li><a href="#"><span>footwear</span></a></li><li><a href="#"><span>handbags</span></a></li><li><a href="#"><span>jewelry</span></a></li><li><a href="#"><span>mens</span></a></li><li><a href="#"><span>womens</span></a></li><li><a href="#"><span>sale promotions</span></a></li><li><a href="#"><span>lookbook !</span></a></li></ul>
[/item]
[/item]',
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
    $pane->uuid = 'e7ea0bf6-8645-4b21-b735-dc2939693b87';
    $display->content['new-e7ea0bf6-8645-4b21-b735-dc2939693b87'] = $pane;
    $display->panels['sidebar_slider'][0] = 'new-e7ea0bf6-8645-4b21-b735-dc2939693b87';
    $pane = new stdClass();
    $pane->pid = 'new-4dd46d87-8b2b-499d-b1bd-c4e32b8bf923';
    $pane->panel = 'slider';
    $pane->type = 'views';
    $pane->subtype = 'front_main_slider';
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
    $pane->uuid = '4dd46d87-8b2b-499d-b1bd-c4e32b8bf923';
    $display->content['new-4dd46d87-8b2b-499d-b1bd-c4e32b8bf923'] = $pane;
    $display->panels['slider'][0] = 'new-4dd46d87-8b2b-499d-b1bd-c4e32b8bf923';
    $pane = new stdClass();
    $pane->pid = 'new-e2297843-e454-4cc7-9950-c26916a42eb3';
    $pane->panel = 'static_2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="col-lg-12  col-md-12  col-sm-12  col-xs-12  "><div class="row"><div class="col-xs-12 col-sm-12 col-md-5 col-lg-5"><div class="block-static-top"><div class="block-img" style="background-image: url(\'' . $base_url . '/profiles/logancee/themes/loganceevisual/images/img-block1.jpg\');">&nbsp;</div><div class="text-wrap"><h2 class="title">leather<br>wallet</h2>
<a class="h4" href="#">Shop Now <span class="arrow_right">&nbsp;</span></a></div></div></div><div class="col-xs-12 col-sm-12 col-md-7 col-lg-7"><div class="block-static-top"><div class="block-img" style="background-image: url(\'' . $base_url . '/profiles/logancee/themes/loganceevisual/images/img-block2.jpg\');">&nbsp;</div><div class="text-wrap"><h2 class="title">10% off<br>boots</h2>
<a class="h4" href="#">Shop Now <span class="arrow_right">&nbsp;</span></a></div></div></div></div></div>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'block-static row block-wrap',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e2297843-e454-4cc7-9950-c26916a42eb3';
    $display->content['new-e2297843-e454-4cc7-9950-c26916a42eb3'] = $pane;
    $display->panels['static_2'][0] = 'new-e2297843-e454-4cc7-9950-c26916a42eb3';
    $pane = new stdClass();
    $pane->pid = 'new-613fb2c7-b73c-4507-b7d4-3c4d955bf912';
    $pane->panel = 'static_2';
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
      'display' => 'block_1',
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
      'css_class' => 'tabs-wrap',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '613fb2c7-b73c-4507-b7d4-3c4d955bf912';
    $display->content['new-613fb2c7-b73c-4507-b7d4-3c4d955bf912'] = $pane;
    $display->panels['static_2'][1] = 'new-613fb2c7-b73c-4507-b7d4-3c4d955bf912';
    $pane = new stdClass();
    $pane->pid = 'new-1c9d3c0a-9ec8-41a0-83a7-a09a4506df8c';
    $pane->panel = 'static_2';
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
    $pane->uuid = '1c9d3c0a-9ec8-41a0-83a7-a09a4506df8c';
    $display->content['new-1c9d3c0a-9ec8-41a0-83a7-a09a4506df8c'] = $pane;
    $display->panels['static_2'][2] = 'new-1c9d3c0a-9ec8-41a0-83a7-a09a4506df8c';
    $pane = new stdClass();
    $pane->pid = 'new-ecd4b4d8-b74e-4512-b842-4125575fb17b';
    $pane->panel = 'static_2';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ecd4b4d8-b74e-4512-b842-4125575fb17b';
    $display->content['new-ecd4b4d8-b74e-4512-b842-4125575fb17b'] = $pane;
    $display->panels['static_2'][3] = 'new-ecd4b4d8-b74e-4512-b842-4125575fb17b';
    $pane = new stdClass();
    $pane->pid = 'new-f0eb6bf6-e4e4-47fa-a63e-a728ddd5aafb';
    $pane->panel = 'static_2';
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
    $pane->uuid = 'f0eb6bf6-e4e4-47fa-a63e-a728ddd5aafb';
    $display->content['new-f0eb6bf6-e4e4-47fa-a63e-a728ddd5aafb'] = $pane;
    $display->panels['static_2'][4] = 'new-f0eb6bf6-e4e4-47fa-a63e-a728ddd5aafb';
    $pane = new stdClass();
    $pane->pid = 'new-9c49a0a3-1e3f-44f5-aae7-491308669962';
    $pane->panel = 'static_2';
    $pane->type = 'views';
    $pane->subtype = 'blog_items_front';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'blog-style-3',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '9c49a0a3-1e3f-44f5-aae7-491308669962';
    $display->content['new-9c49a0a3-1e3f-44f5-aae7-491308669962'] = $pane;
    $display->panels['static_2'][5] = 'new-9c49a0a3-1e3f-44f5-aae7-491308669962';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage_sidebar'] = $page;

  return $pages;

}
