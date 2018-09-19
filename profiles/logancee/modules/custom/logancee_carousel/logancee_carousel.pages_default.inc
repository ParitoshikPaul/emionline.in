<?php
/**
 * @file
 * logancee_carousel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function logancee_carousel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frontpage_carousel';
  $page->task = 'page';
  $page->admin_title = 'frontpage carousel';
  $page->admin_description = '';
  $page->path = 'front-carousel';
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
  $handler->name = 'page_frontpage_carousel__panel_context_fabf1d12-6e93-4cfd-8171-68aabd551a24';
  $handler->task = 'page';
  $handler->subtask = 'frontpage_carousel';
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
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'welcome_block',
        ),
        'parent' => 'main',
        'class' => 'container',
        'hide_empty' => 0,
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
          0 => 'block_icon_1',
          1 => 'block_icon_2',
          2 => 'block_icon_3',
        ),
        'parent' => 'main',
        'class' => 'main-container container',
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
      'welcome_block' => array(
        'type' => 'region',
        'title' => 'Welcome block',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'block-welcome',
        'hide_empty' => 0,
      ),
      'block_icon_1' => array(
        'type' => 'region',
        'title' => 'Block icon 1',
        'width' => '35.08083253845966',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'block_icon_2' => array(
        'type' => 'region',
        'title' => 'Block icon 2',
        'width' => '33.076579834217846',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'block_icon_3' => array(
        'type' => 'region',
        'title' => 'Block icon 3',
        'width' => '31.842587627322487',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'newsletter',
        ),
        'parent' => 'main',
        'class' => 'blog-style container',
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
      'newsletter' => array(
        'type' => 'region',
        'title' => 'Blog',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'teasers' => array(
        'type' => 'region',
        'title' => 'Teasers',
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
      'teasers' => array(
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
      'newsletter' => NULL,
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
      'style' => 'naked',
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
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ce6c5fdd-32d8-4b3a-9ec8-7c315f155209';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4cef6ef7-52ff-4d38-8ccc-c3deeed78127';
    $pane->panel = 'block_icon_1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Block info 1',
      'title' => '',
      'body' => '<p>[item class=&quot;block-icon&quot;] [item class=&quot;block-center&quot;]</p><p>[item class=&quot;icon_pin_alt&quot; type=&quot;span&quot;][/item]</p><h3>Free Shipping</h3><p>[item class=&quot;text&quot;]Free for all over oder $99.00[/item]</p><p>[/item] [/item]</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4cef6ef7-52ff-4d38-8ccc-c3deeed78127';
    $display->content['new-4cef6ef7-52ff-4d38-8ccc-c3deeed78127'] = $pane;
    $display->panels['block_icon_1'][0] = 'new-4cef6ef7-52ff-4d38-8ccc-c3deeed78127';
    $pane = new stdClass();
    $pane->pid = 'new-b0066806-19cd-4c7d-a46f-345449e70540';
    $pane->panel = 'block_icon_2';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>[item class=&quot;block-icon block-icon2&quot;] [item class=&quot;block-center&quot;]</p><p>[item class=&quot;icon_currency&quot; type=&quot;span&quot;][/item]</p><h3>Money Back</h3><p>[item class=&quot;text&quot;]100% Money back -&nbsp;30 days[/item]</p><p>[/item] [/item]</p>',
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
    $pane->uuid = 'b0066806-19cd-4c7d-a46f-345449e70540';
    $display->content['new-b0066806-19cd-4c7d-a46f-345449e70540'] = $pane;
    $display->panels['block_icon_2'][0] = 'new-b0066806-19cd-4c7d-a46f-345449e70540';
    $pane = new stdClass();
    $pane->pid = 'new-7bae2094-b10a-4787-b42f-6b4220366e3f';
    $pane->panel = 'block_icon_3';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>[item class=&quot;block-icon&quot;] [item class=&quot;block-center&quot;]</p><p>[item class=&quot;icon_pin_alt&quot; type=&quot;span&quot;][/item]</p><h3>24H Support</h3><p>[item class=&quot;text&quot;]Great service 24/7[/item]</p><p>[/item] [/item]</p>',
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
    $pane->uuid = '7bae2094-b10a-4787-b42f-6b4220366e3f';
    $display->content['new-7bae2094-b10a-4787-b42f-6b4220366e3f'] = $pane;
    $display->panels['block_icon_3'][0] = 'new-7bae2094-b10a-4787-b42f-6b4220366e3f';
    $pane = new stdClass();
    $pane->pid = 'new-eab5a448-9586-400d-88d1-e7912dc7a183';
    $pane->panel = 'newsletter';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'eab5a448-9586-400d-88d1-e7912dc7a183';
    $display->content['new-eab5a448-9586-400d-88d1-e7912dc7a183'] = $pane;
    $display->panels['newsletter'][0] = 'new-eab5a448-9586-400d-88d1-e7912dc7a183';
    $pane = new stdClass();
    $pane->pid = 'new-552d5b7f-f27b-481d-8fc5-6c6bfe798ffc';
    $pane->panel = 'slider';
    $pane->type = 'views';
    $pane->subtype = 'front_carousel';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'main-slide main-carousel',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '552d5b7f-f27b-481d-8fc5-6c6bfe798ffc';
    $display->content['new-552d5b7f-f27b-481d-8fc5-6c6bfe798ffc'] = $pane;
    $display->panels['slider'][0] = 'new-552d5b7f-f27b-481d-8fc5-6c6bfe798ffc';
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
    $pane = new stdClass();
    $pane->pid = 'new-e855fcba-5e83-4a7b-9c25-46b7c5455fe8';
    $pane->panel = 'welcome_block';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="main-heading"><div class="heading-title"><h2 class="title-block"><span>Welcome to logancee store</span></h2></div></div><p>[/item] [/item]</p><p>[item class=&quot;text-block&quot;]<span>We&rsquo;re a team of creative and make amazing site in ecommerce from Unite States. We love colour pastel, highlight and simple, its make our design look so awesome</span>[/item]</p><p>&nbsp;</p>',
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
    $pane->uuid = 'e855fcba-5e83-4a7b-9c25-46b7c5455fe8';
    $display->content['new-e855fcba-5e83-4a7b-9c25-46b7c5455fe8'] = $pane;
    $display->panels['welcome_block'][0] = 'new-e855fcba-5e83-4a7b-9c25-46b7c5455fe8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage_carousel'] = $page;

  return $pages;

}
