<?php
/**
 * @file
 * page.preprocess.php
 *
 * page preprocess function
 */

/**
 *Implementation of hook_preprocess_html
 */
function loganceevisual_preprocess_html(&$vars) {
  if ($node = menu_get_object()) {
    if(isset($node->type) && $node->type == "product_display"){
      $vars['classes_array'][] = 'catalog-category-view';
    }

    if (isset($node->type) && $node->type == "page") {
      $vars['classes_array'][] = 'cms-page-view';
    }
  }
  $view = views_get_page_view();
  if (isset($view->name) && ($view->name == 'shop_category_terms'
      || $view->name == 'shop_1_column'
      || $view->name == 'shop_2_columns'
      || $view->name == 'shop_6_col'
      || $view->name == 'shop_3_col'
      || $view->name == 'shop_list'
    )) {
    $vars['classes_array'][] = 'catalog-category-view';
  }

  $header_style = theme_get_setting('header_style');
  if(isset($header_style) && $header_style == 7) {
    $vars['classes_array'][] = 'home-sidebar';
  }
}