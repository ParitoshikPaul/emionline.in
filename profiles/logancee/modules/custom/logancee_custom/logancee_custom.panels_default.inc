<?php
/**
 * @file
 * logancee_custom.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function logancee_custom_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer_blocks';
  $mini->category = '';
  $mini->admin_title = 'Footer blocks';
  $mini->admin_description = 'Footer blocks for the site';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'menu_1',
          1 => 'center',
          2 => 'menu_2',
          3 => 'info_block',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Menu 1',
        'width' => '25.282692242884455',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'menu_1' => array(
        'type' => 'region',
        'title' => 'Logo',
        'width' => '27.683679458827385',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'menu_2' => array(
        'type' => 'region',
        'title' => 'Menu 2',
        'width' => '23.685216683696535',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'info_block' => array(
        'type' => 'region',
        'title' => 'Info block',
        'width' => '23.348411614591626',
        'width_type' => '%',
        'parent' => 'main-row',
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
        'css_class' => 'information-footer collapsible mobile-collapsible',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
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
      'menu_1' => array(
        'css_id' => '',
        'css_class' => 'information-logo',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
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
      'menu_2' => array(
        'css_id' => '',
        'css_class' => 'customer-care collapsible mobile-collapsible',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
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
      'info_block' => array(
        'css_id' => '',
        'css_class' => 'contact-footer collapsible mobile-collapsible',
        'column' => array(
          'xs' => '12',
          'sm' => '12',
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
    'style' => 'bootstrap_region',
    'menu_1' => array(
      'style' => 'bootstrap_region',
    ),
    'center' => array(
      'style' => 'bootstrap_region',
    ),
    'menu_2' => array(
      'style' => 'bootstrap_region',
    ),
    'info_block' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2b3dbba1-5527-410d-9aa8-2918e103b6cc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2e664bcc-017c-42e1-b4db-4c2fb332d51e';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-menu-information';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Information',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'footer-static',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2e664bcc-017c-42e1-b4db-4c2fb332d51e';
    $display->content['new-2e664bcc-017c-42e1-b4db-4c2fb332d51e'] = $pane;
    $display->panels['center'][0] = 'new-2e664bcc-017c-42e1-b4db-4c2fb332d51e';
    $pane = new stdClass();
    $pane->pid = 'new-ec9bd509-149e-49f9-a3ca-79ebec954c4a';
    $pane->panel = 'info_block';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Contact us',
      'title' => '',
      'body' => '<h3>Contact us</h3>
<ul class="clearfix address-footer"><li class="item"><a><span class="icon_house_alt">&nbsp;</span>123 New Design St, ABC Building, Melbourne, Australia</a></li><li class="item"><a><span class="icon_mobile">&nbsp;</span>(0044) 123 456 789</a></li><li class="item"><a><span class="icon_mail_alt">&nbsp;</span>hello@yourdomain.com</a></li></ul>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'footer-static',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ec9bd509-149e-49f9-a3ca-79ebec954c4a';
    $display->content['new-ec9bd509-149e-49f9-a3ca-79ebec954c4a'] = $pane;
    $display->panels['info_block'][0] = 'new-ec9bd509-149e-49f9-a3ca-79ebec954c4a';
    $pane = new stdClass();
    $pane->pid = 'new-ef21f54f-f358-4b0c-a6fe-23c20f7da6f2';
    $pane->panel = 'menu_1';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'logo-bottom',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ef21f54f-f358-4b0c-a6fe-23c20f7da6f2';
    $display->content['new-ef21f54f-f358-4b0c-a6fe-23c20f7da6f2'] = $pane;
    $display->panels['menu_1'][0] = 'new-ef21f54f-f358-4b0c-a6fe-23c20f7da6f2';
    $pane = new stdClass();
    $pane->pid = 'new-2b936db5-53e6-44ed-bedb-cff35cb08d90';
    $pane->panel = 'menu_1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'Logancee is a premium magento theme. Best choice for your online store. Let purchase it to enjoy now',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2b936db5-53e6-44ed-bedb-cff35cb08d90';
    $display->content['new-2b936db5-53e6-44ed-bedb-cff35cb08d90'] = $pane;
    $display->panels['menu_1'][1] = 'new-2b936db5-53e6-44ed-bedb-cff35cb08d90';
    $pane = new stdClass();
    $pane->pid = 'new-5a05d238-c965-458f-a9e7-34bb42cef6f6';
    $pane->panel = 'menu_2';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-customer-care';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Customer care',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'footer-static',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5a05d238-c965-458f-a9e7-34bb42cef6f6';
    $display->content['new-5a05d238-c965-458f-a9e7-34bb42cef6f6'] = $pane;
    $display->panels['menu_2'][0] = 'new-5a05d238-c965-458f-a9e7-34bb42cef6f6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer_blocks'] = $mini;

  return $export;
}
