<?php
/**
 * @file
 * page.preprocess.php
 *
 * page preprocess function
 */

/**
 *Implementation of hook_preprocess_page
 */
function loganceevisual_preprocess_page(&$vars) {

  global $language;
  $vars['lang_name'] = $language->native;
  $vars['language_icon'] = theme_languageicons_icon([
    'language' => $language,
    'title' => $language->language,
  ]);

  if (isset($vars['page']['content']['system_main']['default_message'])) {
    unset($vars['page']['content']['system_main']['default_message']);
    drupal_set_title('');
  }

  if (isset($vars['node']->type) && $vars['node']->type == "product_display") {
    //get default banner image
    $products_background = theme_get_setting('background_products');
    $products_background_file = file_load($products_background);
    if (!empty($products_background_file->uri)) {
      $vars['products_background'] = file_create_url($products_background_file->uri);
      $vars['product_title'] = $vars['node']->title;
    }
  }

  if (isset($vars['node']->type) && $vars['node']->type == "page") {
    //get the node banner image
    $products_background = field_get_items('node', $vars['node'], 'field_banner_image');
    if (!empty($products_background[0]['uri'])) {
      $vars['products_background'] = file_create_url($products_background[0]['uri']);
      $title = field_get_items('node', $vars['node'], 'field_banner_title');
      $vars['product_title'] = $title[0]['value'];
    }
  }

  $view = views_get_page_view();
  if (isset($view->name) && ($view->name == 'shop_category_terms'
      || $view->name == 'shop_1_column'
      || $view->name == 'shop_2_columns'
      || $view->name == 'shop_6_col'
      || $view->name == 'shop_3_col'
      || $view->name == 'shop_list'
    )
  ) {
    //get default banner image
    $products_background = theme_get_setting('background_products');
    $products_background_file = file_load($products_background);
    if (!empty($products_background_file->uri)) {
      $vars['products_background'] = file_create_url($products_background_file->uri);
      $vars['product_title'] = drupal_get_title();
    }
  }

  //login background images
  $path = current_path();
  if ($path == "user/login" || $path == "user/register" || ($path == "user" && user_is_anonymous()) || $path == "user/password") {
    //get default banner image
    $products_background = theme_get_setting('background_login');
    $products_background_file = file_load($products_background);
    if (!empty($products_background_file->uri)) {
      $vars['products_background'] = file_create_url($products_background_file->uri);
      $vars['product_title'] = drupal_get_title();
    }
  }

  if ($path == "user/login" || ($path == "user" && user_is_anonymous())) {
    $vars['register_form'] = drupal_get_form('user_register_form');
  }

  if ($path == "user/register") {
    $vars['login_form'] = drupal_get_form('user_login');
  }

  //get cart info for adding variables to page template
  global $user;
  global $language;
  $cart_info = commerce_cart_order_load($user->uid);

  if (isset($cart_info->commerce_order_total[$language->language][0]['amount']) && isset($cart_info->commerce_line_items[$language->language])) {
    $vars['cart_items'] = sizeof($cart_info->commerce_line_items[$language->language]);
    $vars['cart_message'] = t('You have ') . $vars['cart_items'] . t(' items in your shopping cart.');
    $vars['amount'] = commerce_currency_format($cart_info->commerce_order_total[$language->language][0]['amount'], $cart_info->commerce_order_total[$language->language][0]['currency_code']);
  }
  else {
    if (isset($cart_info->commerce_order_total[LANGUAGE_NONE][0]['amount']) && isset($cart_info->commerce_line_items[LANGUAGE_NONE])) {
      $vars['cart_items'] = sizeof($cart_info->commerce_line_items[LANGUAGE_NONE]);
      $vars['cart_message'] = t('You have ') . $vars['cart_items'] . t(' items in your shopping cart.');
      $vars['amount'] = commerce_currency_format($cart_info->commerce_order_total[LANGUAGE_NONE][0]['amount'], $cart_info->commerce_order_total[LANGUAGE_NONE][0]['currency_code']);
    }
    else {
      $vars['cart_items'] = 0;
      $vars['cart_message'] = t('You have ') . $vars['cart_items'] . t(' items in your shopping cart.');
      $vars['amount'] = 0;
    }
  }

  if ($path == "cart" || $path == "checkout" || $path == "checkout/2") {
    //get default banner image for cart page
    $products_background = theme_get_setting('background_cart');
    if ($products_background) {
      $products_background_file = file_load($products_background);
      if (!empty($products_background_file->uri)) {
        $vars['products_background'] = file_create_url($products_background_file->uri);
        $vars['product_title'] = drupal_get_title();
      }
    }
  }

  if ($path == "blog" || isset($vars['node']->type) && $vars['node']->type == "blog") {
    //get default banner image for cart page
    $products_background = theme_get_setting('background_blog');
    if ($products_background) {
      $products_background_file = file_load($products_background);
      if (!empty($products_background_file->uri)) {
        $vars['products_background'] = file_create_url($products_background_file->uri);
        $vars['product_title'] = drupal_get_title();
      }
    }
  }

  if (strpos($path, 'search') !== FALSE) {
    //get default banner image for cart page
    $products_background = theme_get_setting('background_search');
    if ($products_background) {
      $products_background_file = file_load($products_background);
      if (!empty($products_background_file->uri)) {
        $vars['products_background'] = file_create_url($products_background_file->uri);
        $vars['product_title'] = drupal_get_title();
      }
    }
  }

  $header = theme_get_setting('header_style');
  if (isset($header)) {
    $vars['header_version'] = $header;
  }
  $page = theme_get_setting('page_style');
  if (isset($page)) {
    $vars['page_version'] = $page;
  }
  $footer_color = theme_get_setting('footer_color');
  if (isset($footer_color)) {
    $vars['footer_color'] = $footer_color;
  }
  $footer_style = theme_get_setting('footer_style');
  if (isset($footer_style)) {
    $vars['footer_style'] = $footer_style;
  }

  if (drupal_is_front_page()) {
    drupal_set_title('');
    $vars['wrapper_classes'][] = 'cms-index-index';
  }

  //Fixed defaults for each path (samples)
  if (current_path() == 'front-carousel') {
    drupal_set_title('');
    $vars['wrapper_classes'][] = 'cms-index-index';

    $vars['header_version'] = !(isset($vars['header_version'])) ? '2' : theme_get_setting('header_style');
    $vars['page_version'] = !(isset($vars['page_version'])) ? 'full' : theme_get_setting('page_style');
    $vars['footer_color'] = !(isset($vars['footer_color'])) ? 'white' : theme_get_setting('footer_color');
    $vars['footer_style'] = !(isset($vars['footer_style'])) ? 'menus' : theme_get_setting('footer_style');
  }
  else {
    if (current_path() == 'front-clients') {
      drupal_set_title('');
      $vars['wrapper_classes'][] = 'cms-index-index';

      $vars['header_version'] = !(isset($vars['header_version'])) ? '2' : theme_get_setting('header_style');
      $vars['page_version'] = !(isset($vars['page_version'])) ? 'full' : theme_get_setting('page_style');
      $vars['footer_color'] = !(isset($vars['footer_color'])) ? 'white' : theme_get_setting('footer_color');
      $vars['footer_style'] = !(isset($vars['footer_style'])) ? 'menus' : theme_get_setting('footer_style');
    }
    else {
      if (current_path() == 'front-fluid') {
        drupal_set_title('');
        $vars['container_class'] = "";

        $vars['wrapper_classes'][] = 'home03';
        $vars['wrapper_classes'][] = 'cms-index-index';

        $vars['header_version'] = !(isset($vars['header_version'])) ? '3' : theme_get_setting('header_style');
        $vars['page_version'] = !(isset($vars['page_version'])) ? 'full' : theme_get_setting('page_style');
        $vars['footer_color'] = !(isset($vars['footer_color'])) ? 'grey' : theme_get_setting('footer_color');
        $vars['footer_style'] = !(isset($vars['footer_style'])) ? 'social' : theme_get_setting('footer_style');
      }
      else {
        if (current_path() == 'front-fluid2') {
          drupal_add_js(drupal_get_path('theme', 'loganceevisual') . '/ext/prototype.js', 'file');
          drupal_add_js(drupal_get_path('theme', 'loganceevisual') . '/js/typowidget.js', 'file');

          drupal_set_title('');
          $vars['container_class'] = "";

          $vars['wrapper_classes'][] = 'home03';
          $vars['wrapper_classes'][] = 'home07';
          $vars['wrapper_classes'][] = 'cms-index-index';


          $vars['header_version'] = !(isset($vars['header_version'])) ? '3' : theme_get_setting('header_style');
          $vars['page_version'] = !(isset($vars['page_version'])) ? 'full' : theme_get_setting('page_style');
          $vars['footer_color'] = !(isset($vars['footer_color'])) ? 'grey' : theme_get_setting('footer_color');
          $vars['footer_style'] = !(isset($vars['footer_style'])) ? 'social' : theme_get_setting('footer_style');
        }
        else {
          if (current_path() == 'front-jewelry') {
            drupal_set_title('');
            $vars['wrapper_classes'][] = 'cms-index-index';
            $vars['container_class'] = "col1-layout";
            $vars['content_column_class'] = "";

            $vars['header_version'] = !(isset($vars['header_version'])) ? '6' : theme_get_setting('header_style');
            $vars['page_version'] = !(isset($vars['page_version'])) ? 'full' : theme_get_setting('page_style');
            $vars['footer_color'] = !(isset($vars['footer_color'])) ? 'grey' : theme_get_setting('footer_color');
            $vars['footer_style'] = !(isset($vars['footer_style'])) ? 'social' : theme_get_setting('footer_style');
          }
          else {
            if (current_path() == 'front-main2') {
              drupal_set_title('');
              $vars['wrapper_classes'][] = 'cms-index-index';

              $vars['header_version'] = !(isset($vars['header_version'])) ? '7' : theme_get_setting('header_style');
              $vars['page_version'] = !(isset($vars['page_version'])) ? 'full' : theme_get_setting('page_style');
              $vars['footer_color'] = !(isset($vars['footer_color'])) ? 'grey' : theme_get_setting('footer_color');
              $vars['footer_style'] = !(isset($vars['footer_style'])) ? 'light' : theme_get_setting('footer_style');
            }
            else {
              if (current_path() == 'front-multiscroll') {
                drupal_set_title('');
                $vars['wrapper_classes'][] = 'home04';
                $vars['wrapper_classes'][] = 'cms-index-index';
                $vars['wrapper_classes'][] = 'fp-viewing-0';

                $vars['header_version'] = !(isset($vars['header_version'])) ? '4' : theme_get_setting('header_style');
                $vars['page_version'] = !(isset($vars['page_version'])) ? 'full' : theme_get_setting('page_style');
                $vars['footer_color'] = !(isset($vars['footer_color'])) ? 'white' : theme_get_setting('footer_color');
                $vars['footer_style'] = !(isset($vars['footer_style'])) ? 'light' : theme_get_setting('footer_style');
              }
              else {
                if (current_path() == 'front-parallax') {
                  drupal_set_title('');
                  $vars['wrapper_classes'][] = 'home04';
                  $vars['wrapper_classes'][] = 'cms-index-index';
                  $vars['wrapper_classes'][] = 'fp-viewing-0';

                  $vars['header_version'] = !(isset($vars['header_version'])) ? '4' : theme_get_setting('header_style');
                  $vars['page_version'] = !(isset($vars['page_version'])) ? 'full' : theme_get_setting('page_style');
                  $vars['footer_color'] = !(isset($vars['footer_color'])) ? 'white' : theme_get_setting('footer_color');
                  $vars['footer_style'] = !(isset($vars['footer_style'])) ? 'light' : theme_get_setting('footer_style');
                }
                else {
                  if (current_path() == 'front-sidebar') {
                    drupal_set_title('');
                    $vars['wrapper_classes'][] = 'cms-index-index';

                    $vars['header_version'] = !(isset($vars['header_version'])) ? '5' : theme_get_setting('header_style');
                    $vars['page_version'] = !(isset($vars['page_version'])) ? 'boxed' : theme_get_setting('page_style');
                    $vars['footer_color'] = !(isset($vars['footer_color'])) ? 'white' : theme_get_setting('footer_color');
                    $vars['footer_style'] = !(isset($vars['footer_style'])) ? 'menus' : theme_get_setting('footer_style');
                  }
                  else {
                    $vars['wrapper_classes'][] = '';

                    $vars['header_version'] = !(isset($vars['header_version'])) ? '1' : theme_get_setting('header_style');
                    $vars['page_version'] = !(isset($vars['page_version'])) ? 'full' : theme_get_setting('page_style');
                    $vars['footer_color'] = !(isset($vars['footer_color'])) ? 'white' : theme_get_setting('footer_color');
                    $vars['footer_style'] = !(isset($vars['footer_style'])) ? 'menus' : theme_get_setting('footer_style');
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  $vars['wrapper_classes'] = implode(' ', $vars['wrapper_classes']);
}