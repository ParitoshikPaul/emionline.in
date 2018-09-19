<?php
/**
 * @file
 * template.php
 *
 * This file should only contain light helper functions and stubs pointing to
 * other files containing more complex functions.
 */

require_once dirname(__FILE__) . '/includes/loganceevisual.inc';
require_once dirname(__FILE__) . '/includes/registry.inc';

/**
 * Implements hook_theme_registry_alter().
 */
function loganceevisual_theme_registry_alter(&$registry) {

  // For maintainability reasons, some of this code lives in a class.
  $handler = new LoganceevisualThemeRegistryHandler($registry, $GLOBALS['theme']);

  // Allows themers to split preprocess / process / theme code across separate
  // files to keep the main template.php file clean. This is really fast because
  // it uses the theme registry to cache the paths to the files that it finds.
  $trail = loganceevisual_theme_trail($GLOBALS['theme']);
  foreach ($trail as $theme => $name) {
    $handler->registerHooks($theme);
    $handler->registerThemeFunctions($theme, $trail);
  }

}

/**
 * Implements hook_theme().
 */

function loganceevisual_theme() {
  return array(
    'user_login' => array(
      'render element' => 'form',
      'template' => 'user-login',
      'preprocess functions' => array(
        'loganceevisual_preprocess_user_login'
      ),
    ),
    'user_register_form' => array(
      'render element' => 'form',
      'template' => 'user-register',
      'preprocess functions' => array(
        'loganceevisual_preprocess_user_register'
      ),
    ),
  );
}

function loganceevisual_preprocess_user_login(&$variables) {
  $variables['register_form'] = drupal_get_form('user_register_form');
}

function loganceevisual_preprocess_user_register(&$variables) {
  $variables['login_form'] = drupal_get_form('user_login_block');
}

function loganceevisual_preprocess_user_picture(&$variables) {

  $account = $variables ['account'];

  if (!empty($account->picture)) {
    // @TODO: Ideally this function would only be passed file objects, but
    // since there's a lot of legacy code that JOINs the {users} table to
    // {node} or {comments} and passes the results into this function if we
    // a numeric value in the picture field we'll assume it's a file id
    // and load it for them. Once we've got user_load_multiple() and
    // comment_load_multiple() functions the user module will be able to load
    // the picture files in mass during the object's load process.
    if (is_numeric($account->picture)) {
      $account->picture = file_load($account->picture);
    }
    if (!empty($account->picture->uri)) {
      $filepath = $account->picture->uri;
    }
  }
  else {
    $filepath = drupal_get_path("theme", "loganceevisual") . "/default-avatar.png";
    $variables ['user_picture'] = theme('image', array(
      'path' => $filepath,
      'alt' => "user_default",
      'title' => "User picture"
    ));
  }
}

function loganceevisual_form_comment_form_alter(&$form, &$form_state) {
  $form['field_rate']['#weight'] = -1;
  $form['field_rate']['#prefix'] = '<div class="col-xs-12 col-sm-5 col-md-4 col-lg-4"><div><strong>' . t("How do you rate this product?") . '</strong></div>';
  $form['field_rate']['#suffix'] = '</div>';

  $form['your_comment'] = array(
    '#type' => 'fieldset',
    '#collapsible' => FALSE,
    '#weight' => 2,
    '#prefix' => '<div class="col-xs-12 col-sm-7 col-md-8 col-lg-8">',
    '#suffix' => '</div>',
  );

  $form['your_comment']['subject'] = $form['subject'];
  unset($form['subject']);
  $form['your_comment']['subject']['#weight'] = 2;
  $form['your_comment']['subject']['#title'] = t("Summary of your review");

  $form['your_comment']['comment_body'] = $form['comment_body'];
  unset($form['comment_body']);
  $form['your_comment']['comment_body']['#weight'] = 3;

  $form['your_comment']['author'] = $form['author'];
  unset($form['author']);
  $form['your_comment']['author']['#weight'] = 1;

}