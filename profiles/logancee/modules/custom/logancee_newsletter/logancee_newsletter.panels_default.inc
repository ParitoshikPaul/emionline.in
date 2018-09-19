<?php
/**
 * @file
 * logancee_newsletter.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function logancee_newsletter_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'mailchimp_newsletter_sidebar';
  $mini->category = '';
  $mini->admin_title = 'Mailchimp newsletter sidebar';
  $mini->admin_description = 'Mailchimp newsletter for the sidebar';
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
        'class' => 'sidebar-newsletter visible-lg',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
        'hide_empty' => 0,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
        'class' => '',
        'hide_empty' => 0,
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'main-newsletter-inner',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => array(
        'css_id' => '',
        'css_class' => 'subscribe clearfix',
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
    ),
    'center' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '<none>';
  $display->uuid = '2c2ca5cd-3778-42f2-b99d-1456b0181c68';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'mailchimp_newsletter_sidebar';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ebe4b7fa-b2fa-4b45-9d1e-fff23a7f4517';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h2 class="title"><span>Newsletter</span></h2>
    <div class="text">Sign up for our Newsletter !</div>',
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
  $pane->uuid = 'ebe4b7fa-b2fa-4b45-9d1e-fff23a7f4517';
  $display->content['new-ebe4b7fa-b2fa-4b45-9d1e-fff23a7f4517'] = $pane;
  $display->panels['center'][0] = 'new-ebe4b7fa-b2fa-4b45-9d1e-fff23a7f4517';
  $pane = new stdClass();
  $pane->pid = 'new-be2818cf-efaf-482b-8994-091b773e3fba';
  $pane->panel = 'center';
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
  $pane->uuid = 'be2818cf-efaf-482b-8994-091b773e3fba';
  $display->content['new-be2818cf-efaf-482b-8994-091b773e3fba'] = $pane;
  $display->panels['center'][1] = 'new-be2818cf-efaf-482b-8994-091b773e3fba';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['mailchimp_newsletter_sidebar'] = $mini;

  return $export;
}
