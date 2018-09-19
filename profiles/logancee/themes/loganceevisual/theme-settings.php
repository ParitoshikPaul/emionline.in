<?php
/**
 * @file
 * theme-settings.php
 *
 * Provides theme settings for Logancee theme when admin theme is not.
 *
 * @see theme/settings.inc
 */
define('LOGANCEE_THEME', "loganceevisual");

/**
 * Implements hook_form_system_theme_settings_alter
 *
 * Provide additional fiels for the theme settings form
 */
function loganceevisual_form_system_theme_settings_alter(&$form, &$form_state) {

  $form['logancee'] = [
    '#type' => 'vertical_tabs',
    '#attached' => [
      'js' => [drupal_get_path('theme', 'bootstrap') . '/js/bootstrap.admin.js'],
    ],
    '#prefix' => '<h2><small>' . t('Logancee Settings') . '</small></h2>',
    '#weight' => -9,
  ];


  $form['page'] = [
    '#type' => 'fieldset',
    '#title' => t('Page styles'),
    '#group' => 'logancee',
  ];

  $form['page']['page_style'] = [
    '#type' => 'select',
    '#title' => t('Page style'),
    '#options' => [
      'full' => t('Full width'),
      'boxed' => t('Boxed'),
    ],
    '#default_value' => theme_get_setting('page_style'),
    '#description' => t('Choose page style'),
  ];

  $form['page']['footer_color'] = [
    '#type' => 'select',
    '#title' => t('Footer color'),
    '#options' => [
      'white' => t('White'),
      'grey' => t('Grey'),
    ],
    '#default_value' => theme_get_setting('footer_color'),
    '#description' => t('Choose footer color'),
  ];

  $form['page']['footer_style'] = [
    '#type' => 'select',
    '#title' => t('Footer style'),
    '#options' => [
      'menus' => t('Menus'),
      'social' => t('Social'),
      'light' => t('Light'),
    ],
    '#default_value' => theme_get_setting('footer_style'),
    '#description' => t('Choose footer style'),
  ];

  $form['headers'] = [
    '#type' => 'fieldset',
    '#title' => t('Headers'),
    '#group' => 'logancee',
  ];

  $form['headers']['header_style'] = [
    '#type' => 'select',
    '#title' => t('Header style'),
    '#options' => [
      1 => t('Style 1'),
      2 => t('Style 2'),
      3 => t('Style 3'),
      4 => t('Style 4'),
      5 => t('Style 5'),
      6 => t('Style 6'),
      7 => t('Vertical'),
    ],
    '#default_value' => theme_get_setting('header_style'),
    '#description' => t('Choose header style'),
  ];

  $form['products_image'] = [
    '#type' => 'fieldset',
    '#title' => t('Products image'),
    '#group' => 'logancee',
  ];

  $form['products_image']['background_products'] = [
    '#type' => 'managed_file',
    '#title' => t('Background products'),
    '#required' => FALSE,
    '#description' => t('Specify your background image for the products section'),
    '#upload_location' => 'public://',
    '#default_value' => theme_get_setting('background_products'),
    '#upload_validators' => [
      'file_validate_extensions' => ['gif png jpg jpeg'],
    ],
  ];

  $form['login_image'] = [
    '#type' => 'fieldset',
    '#title' => t('Login image'),
    '#group' => 'logancee',
  ];

  $form['login_image']['background_login'] = [
    '#type' => 'managed_file',
    '#title' => t('Background login pages'),
    '#required' => FALSE,
    '#description' => t('Specify your background image for the login section'),
    '#upload_location' => 'public://',
    '#default_value' => theme_get_setting('background_login'),
    '#upload_validators' => [
      'file_validate_extensions' => ['gif png jpg jpeg'],
    ],
  ];

  $form['cart_image'] = [
    '#type' => 'fieldset',
    '#title' => t('Cart image'),
    '#group' => 'logancee',
  ];

  $form['cart_image']['background_cart'] = [
    '#type' => 'managed_file',
    '#title' => t('Background cart pages'),
    '#required' => FALSE,
    '#description' => t('Specify your background image for the carts section'),
    '#upload_location' => 'public://',
    '#default_value' => theme_get_setting('background_cart'),
    '#upload_validators' => [
      'file_validate_extensions' => ['gif png jpg jpeg'],
    ],
  ];

  $form['blog_image'] = [
    '#type' => 'fieldset',
    '#title' => t('Blog image'),
    '#group' => 'logancee',
  ];

  $form['blog_image']['background_blog'] = [
    '#type' => 'managed_file',
    '#title' => t('Background blog pages'),
    '#required' => FALSE,
    '#description' => t('Specify your background image for the blog section'),
    '#upload_location' => 'public://',
    '#default_value' => theme_get_setting('background_blog'),
    '#upload_validators' => [
      'file_validate_extensions' => ['gif png jpg jpeg'],
    ],
  ];

  $form['search_image'] = [
    '#type' => 'fieldset',
    '#title' => t('Search image'),
    '#group' => 'logancee',
  ];

  $form['search_image']['background_search'] = [
    '#type' => 'managed_file',
    '#title' => t('Background search pages'),
    '#required' => FALSE,
    '#description' => t('Specify your background image for the search section'),
    '#upload_location' => 'public://',
    '#default_value' => theme_get_setting('background_search'),
    '#upload_validators' => [
      'file_validate_extensions' => ['gif png jpg jpeg'],
    ],
  ];

  $form['social_networks'] = [
    '#type' => 'fieldset',
    '#title' => t('Store social networks'),
    '#group' => 'logancee',
  ];

  $form['social_networks']['facebook_link'] = [
    '#type' => 'textfield',
    '#title' => t('Facebook Link'),
    '#default_value' => theme_get_setting('facebook_link'),
    '#size' => 60,
    '#maxlength' => 128,
    '#required' => FALSE,
  ];
  $form['social_networks']['twitter_link'] = [
    '#type' => 'textfield',
    '#title' => t('Twitter Link'),
    '#default_value' => theme_get_setting('twitter_link'),
    '#size' => 60,
    '#maxlength' => 128,
    '#required' => FALSE,
  ];
  $form['social_networks']['google_link'] = [
    '#type' => 'textfield',
    '#title' => t('Google Link'),
    '#default_value' => theme_get_setting('google_link'),
    '#size' => 60,
    '#maxlength' => 128,
    '#required' => FALSE,
  ];
  $form['social_networks']['instagram_link'] = [
    '#type' => 'textfield',
    '#title' => t('Instagram Link'),
    '#default_value' => theme_get_setting('instagram_link'),
    '#size' => 60,
    '#maxlength' => 128,
    '#required' => FALSE,
  ];
  $form['social_networks']['pinterest_link'] = [
    '#type' => 'textfield',
    '#title' => t('Pinterest Link'),
    '#default_value' => theme_get_setting('pinterest_link'),
    '#size' => 60,
    '#maxlength' => 128,
    '#required' => FALSE,
  ];

  $form['teaser_cart_form'] = [
    '#type' => 'fieldset',
    '#title' => t('Product teaser cart form'),
    '#group' => 'logancee',
  ];

  $form['teaser_cart_form']['teaser_cart_form_widget'] = [
    '#type' => 'select',
    '#title' => t('Form widget'),
    '#options' => [
      'wishlist' => t('Wishlist only'),
      'cart' => t('Default cart'),
    ],
    '#default_value' => theme_get_setting('teaser_cart_form_widget'),
    '#description' => t('Choose the cart widget on product teasers'),
  ];

  $form['#submit'][] = 'loganceevisual_settings_form_submit';

  // Get all themes.
  $themes = list_themes();
  // Get the current theme
  $active_theme = 'loganceevisual';
  $form_state['build_info']['files'][] = str_replace("/$active_theme.info", '', $themes[$active_theme]->filename) . '/theme-settings.php';
}

function loganceevisual_settings_form_submit(&$form, &$form_state) {
  $files = [
    'background_products',
    'background_login',
    'background_cart',
    'background_blog',
    'background_search',
  ];
  foreach ($files as $file) {
    $image_fid = $form_state['values'][$file];
    $image = file_load($image_fid);
    if (is_object($image)) {
      // Check to make sure that the file is set to be permanent.
      if ($image->status == 0) {
        // Update the status.
        $image->status = FILE_STATUS_PERMANENT;
        // Save the update.
        file_save($image);
        // Add a reference to prevent warnings.
        file_usage_add($image, 'loganceevisual', 'theme', 1);
      }
    }
  }
}