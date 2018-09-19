<?php
/**
 * @file
 * logancee_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function logancee_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:node/55.
  $menu_links['main-menu_about:node/55'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/55',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'identifier' => 'main-menu_about:node/55',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_accessories:taxonomy/term/21.
  $menu_links['main-menu_accessories:taxonomy/term/21'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/21',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Accessories',
    'options' => array(
      'identifier' => 'main-menu_accessories:taxonomy/term/21',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_shop:shop',
  );
  // Exported menu link: main-menu_back-to-school:taxonomy/term/9.
  $menu_links['main-menu_back-to-school:taxonomy/term/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/9',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Back to school',
    'options' => array(
      'identifier' => 'main-menu_back-to-school:taxonomy/term/9',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_suggestions:taxonomy/term/7',
  );
  // Exported menu link: main-menu_bags-and-wallets:taxonomy/term/23.
  $menu_links['main-menu_bags-and-wallets:taxonomy/term/23'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/23',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Bags and Wallets',
    'options' => array(
      'identifier' => 'main-menu_bags-and-wallets:taxonomy/term/23',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_accessories:taxonomy/term/21',
  );
  // Exported menu link: main-menu_basic:taxonomy/term/15.
  $menu_links['main-menu_basic:taxonomy/term/15'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/15',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Basic',
    'options' => array(
      'identifier' => 'main-menu_basic:taxonomy/term/15',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_collections:taxonomy/term/14',
  );
  // Exported menu link: main-menu_black-label:taxonomy/term/13.
  $menu_links['main-menu_black-label:taxonomy/term/13'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/13',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Black label',
    'options' => array(
      'identifier' => 'main-menu_black-label:taxonomy/term/13',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_suggestions:taxonomy/term/7',
  );
  // Exported menu link: main-menu_blog:blog.
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'identifier' => 'main-menu_blog:blog',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_boxed-sidebar:front-sidebar.
  $menu_links['main-menu_boxed-sidebar:front-sidebar'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'front-sidebar',
    'router_path' => 'front-sidebar',
    'link_title' => 'Boxed sidebar',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_boxed-sidebar:front-sidebar',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_home-layouts:<front>',
  );
  // Exported menu link: main-menu_buy-theme:user.
  $menu_links['main-menu_buy-theme:user'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Buy Theme',
    'options' => array(
      'identifier' => 'main-menu_buy-theme:user',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_caps--hats:shop/caps-and-hats.
  $menu_links['main-menu_caps--hats:shop/caps-and-hats'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shop/caps-and-hats',
    'router_path' => 'shop',
    'link_title' => 'Caps & Hats',
    'options' => array(
      'identifier' => 'main-menu_caps--hats:shop/caps-and-hats',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_accessories:taxonomy/term/21',
  );
  // Exported menu link: main-menu_category---3-products-per-row:shop-3-col.
  $menu_links['main-menu_category---3-products-per-row:shop-3-col'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shop-3-col',
    'router_path' => 'shop-3-col',
    'link_title' => 'Category - 3 products per row',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_category---3-products-per-row:shop-3-col',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_category-layouts:shop',
  );
  // Exported menu link: main-menu_category---4-products-per-row:1col-shop.
  $menu_links['main-menu_category---4-products-per-row:1col-shop'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '1col-shop',
    'router_path' => '1col-shop',
    'link_title' => 'Category - 4 products per row',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_category---4-products-per-row:1col-shop',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_category-layouts:shop',
  );
  // Exported menu link: main-menu_category---6-products-per-row:shop-6-col.
  $menu_links['main-menu_category---6-products-per-row:shop-6-col'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shop-6-col',
    'router_path' => 'shop-6-col',
    'link_title' => 'Category - 6 products per row',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_category---6-products-per-row:shop-6-col',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_category-layouts:shop',
  );
  // Exported menu link: main-menu_category-1-column:1col-shop.
  $menu_links['main-menu_category-1-column:1col-shop'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '1col-shop',
    'router_path' => '1col-shop',
    'link_title' => 'Category 1 column',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_category-1-column:1col-shop',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_category-layouts:shop',
  );
  // Exported menu link: main-menu_category-2-columns:shop.
  $menu_links['main-menu_category-2-columns:shop'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shop',
    'router_path' => 'shop',
    'link_title' => 'Category 2 columns',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_category-2-columns:shop',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_category-layouts:shop',
  );
  // Exported menu link: main-menu_category-3-columns:shop-2-col.
  $menu_links['main-menu_category-3-columns:shop-2-col'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shop-2-col',
    'router_path' => 'shop-2-col',
    'link_title' => 'Category 3 columns',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_category-3-columns:shop-2-col',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_category-layouts:shop',
  );
  // Exported menu link: main-menu_category-layouts:shop.
  $menu_links['main-menu_category-layouts:shop'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shop',
    'router_path' => 'shop',
    'link_title' => 'Category Layouts',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_category-layouts:shop',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_features:<front>',
  );
  // Exported menu link: main-menu_coat-and-packas:shop/coat-and-packas.
  $menu_links['main-menu_coat-and-packas:shop/coat-and-packas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shop/coat-and-packas',
    'router_path' => 'shop',
    'link_title' => 'Coat and packas',
    'options' => array(
      'identifier' => 'main-menu_coat-and-packas:shop/coat-and-packas',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_collections:taxonomy/term/14',
  );
  // Exported menu link: main-menu_collections:taxonomy/term/14.
  $menu_links['main-menu_collections:taxonomy/term/14'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/14',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Collections',
    'options' => array(
      'identifier' => 'main-menu_collections:taxonomy/term/14',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_shop:shop',
  );
  // Exported menu link: main-menu_configurable-product:node/25.
  $menu_links['main-menu_configurable-product:node/25'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/25',
    'router_path' => 'node/%',
    'link_title' => 'Configurable product',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_configurable-product:node/25',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_product-types:node/27',
  );
  // Exported menu link: main-menu_contact:contact.
  $menu_links['main-menu_contact:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'main-menu_contact:contact',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_daily-standards:taxonomy/term/12.
  $menu_links['main-menu_daily-standards:taxonomy/term/12'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/12',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Daily standards',
    'options' => array(
      'identifier' => 'main-menu_daily-standards:taxonomy/term/12',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_suggestions:taxonomy/term/7',
  );
  // Exported menu link: main-menu_denim-collection:taxonomy/term/11.
  $menu_links['main-menu_denim-collection:taxonomy/term/11'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/11',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Denim collection',
    'options' => array(
      'identifier' => 'main-menu_denim-collection:taxonomy/term/11',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_suggestions:taxonomy/term/7',
  );
  // Exported menu link: main-menu_downloadable-product:node/29.
  $menu_links['main-menu_downloadable-product:node/29'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'Downloadable product',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_downloadable-product:node/29',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_product-types:node/27',
  );
  // Exported menu link: main-menu_features:<front>.
  $menu_links['main-menu_features:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Features',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_features:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_fragances:taxonomy/term/24.
  $menu_links['main-menu_fragances:taxonomy/term/24'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/24',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Fragances',
    'options' => array(
      'identifier' => 'main-menu_fragances:taxonomy/term/24',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_accessories:taxonomy/term/21',
  );
  // Exported menu link: main-menu_glasses:taxonomy/term/22.
  $menu_links['main-menu_glasses:taxonomy/term/22'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/22',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Glasses',
    'options' => array(
      'identifier' => 'main-menu_glasses:taxonomy/term/22',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_accessories:taxonomy/term/21',
  );
  // Exported menu link: main-menu_home-carousel:front-carousel.
  $menu_links['main-menu_home-carousel:front-carousel'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'front-carousel',
    'router_path' => 'front-carousel',
    'link_title' => 'Home Carousel',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_home-carousel:front-carousel',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_home-layouts:<front>',
  );
  // Exported menu link: main-menu_home-fluid:front-fluid.
  $menu_links['main-menu_home-fluid:front-fluid'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'front-fluid',
    'router_path' => 'front-fluid',
    'link_title' => 'Home Fluid',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_home-fluid:front-fluid',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_home-layouts:<front>',
  );
  // Exported menu link: main-menu_home-layouts:<front>.
  $menu_links['main-menu_home-layouts:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home layouts',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_home-layouts:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_features:<front>',
  );
  // Exported menu link: main-menu_home-parallax:front-parallax.
  $menu_links['main-menu_home-parallax:front-parallax'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'front-parallax',
    'router_path' => 'front-parallax',
    'link_title' => 'Home Parallax',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_home-parallax:front-parallax',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_home-layouts:<front>',
  );
  // Exported menu link: main-menu_home-presentation:front-multiscroll.
  $menu_links['main-menu_home-presentation:front-multiscroll'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'front-multiscroll',
    'router_path' => 'front-multiscroll',
    'link_title' => 'Home Presentation',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_home-presentation:front-multiscroll',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_home-layouts:<front>',
  );
  // Exported menu link: main-menu_home-simple:<front>.
  $menu_links['main-menu_home-simple:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home Simple',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_home-simple:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_home-layouts:<front>',
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_jackets:taxonomy/term/19.
  $menu_links['main-menu_jackets:taxonomy/term/19'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/19',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Jackets',
    'options' => array(
      'identifier' => 'main-menu_jackets:taxonomy/term/19',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_collections:taxonomy/term/14',
  );
  // Exported menu link: main-menu_mens-footweaar:taxonomy/term/27.
  $menu_links['main-menu_mens-footweaar:taxonomy/term/27'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/27',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Men\'s footweaar',
    'options' => array(
      'identifier' => 'main-menu_mens-footweaar:taxonomy/term/27',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_accessories:taxonomy/term/21',
  );
  // Exported menu link: main-menu_must-have:taxonomy/term/10.
  $menu_links['main-menu_must-have:taxonomy/term/10'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/10',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Must Have',
    'options' => array(
      'identifier' => 'main-menu_must-have:taxonomy/term/10',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_suggestions:taxonomy/term/7',
  );
  // Exported menu link: main-menu_new-products:taxonomy/term/8.
  $menu_links['main-menu_new-products:taxonomy/term/8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/8',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'New Products',
    'options' => array(
      'identifier' => 'main-menu_new-products:taxonomy/term/8',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_suggestions:taxonomy/term/7',
  );
  // Exported menu link: main-menu_product-features:node/25.
  $menu_links['main-menu_product-features:node/25'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/25',
    'router_path' => 'node/%',
    'link_title' => 'Product features',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_product-features:node/25',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_features:<front>',
  );
  // Exported menu link: main-menu_product-types:node/27.
  $menu_links['main-menu_product-types:node/27'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Product Types',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_product-types:node/27',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_features:<front>',
  );
  // Exported menu link: main-menu_product-with-inner-zoom:node/27.
  $menu_links['main-menu_product-with-inner-zoom:node/27'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Product with Inner Zoom',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_product-with-inner-zoom:node/27',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_product-features:node/25',
  );
  // Exported menu link: main-menu_product-with-lens-zoom-round:node/25.
  $menu_links['main-menu_product-with-lens-zoom-round:node/25'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/25',
    'router_path' => 'node/%',
    'link_title' => 'Product with Lens Zoom round',
    'options' => array(
      'identifier' => 'main-menu_product-with-lens-zoom-round:node/25',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_product-features:node/25',
  );
  // Exported menu link: main-menu_product-with-lens-zoom-square:node/26.
  $menu_links['main-menu_product-with-lens-zoom-square:node/26'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/26',
    'router_path' => 'node/%',
    'link_title' => 'Product with Lens Zoom square',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_product-with-lens-zoom-square:node/26',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_product-features:node/25',
  );
  // Exported menu link: main-menu_product-with-related:node/29.
  $menu_links['main-menu_product-with-related:node/29'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'Product with Related',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_product-with-related:node/29',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_product-features:node/25',
  );
  // Exported menu link: main-menu_shop:shop.
  $menu_links['main-menu_shop:shop'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'shop',
    'router_path' => 'shop',
    'link_title' => 'Shop',
    'options' => array(
      'identifier' => 'main-menu_shop:shop',
      'attributes' => array(
        'title' => 'Hot',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_shorts:taxonomy/term/17.
  $menu_links['main-menu_shorts:taxonomy/term/17'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/17',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Shorts',
    'options' => array(
      'identifier' => 'main-menu_shorts:taxonomy/term/17',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_collections:taxonomy/term/14',
  );
  // Exported menu link: main-menu_simple-product:node/27.
  $menu_links['main-menu_simple-product:node/27'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/27',
    'router_path' => 'node/%',
    'link_title' => 'Simple Product',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_simple-product:node/27',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_product-types:node/27',
  );
  // Exported menu link: main-menu_suggestions:taxonomy/term/7.
  $menu_links['main-menu_suggestions:taxonomy/term/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/7',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Suggestions',
    'options' => array(
      'identifier' => 'main-menu_suggestions:taxonomy/term/7',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_shop:shop',
  );
  // Exported menu link: main-menu_t-shirts:taxonomy/term/18.
  $menu_links['main-menu_t-shirts:taxonomy/term/18'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/18',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'T-shirts',
    'options' => array(
      'identifier' => 'main-menu_t-shirts:taxonomy/term/18',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_collections:taxonomy/term/14',
  );
  // Exported menu link: main-menu_trousers:taxonomy/term/20.
  $menu_links['main-menu_trousers:taxonomy/term/20'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/20',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Trousers',
    'options' => array(
      'identifier' => 'main-menu_trousers:taxonomy/term/20',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_collections:taxonomy/term/14',
  );
  // Exported menu link: main-menu_underwear:taxonomy/term/26.
  $menu_links['main-menu_underwear:taxonomy/term/26'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/26',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Underwear',
    'options' => array(
      'identifier' => 'main-menu_underwear:taxonomy/term/26',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_accessories:taxonomy/term/21',
  );
  // Exported menu link: main-menu_virtual-product:node/28.
  $menu_links['main-menu_virtual-product:node/28'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/28',
    'router_path' => 'node/%',
    'link_title' => 'Virtual product',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_virtual-product:node/28',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_product-types:node/27',
  );
  // Exported menu link: menu-customer-care_gift-cards:<front>.
  $menu_links['menu-customer-care_gift-cards:<front>'] = array(
    'menu_name' => 'menu-customer-care',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Gift cards',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-customer-care_gift-cards:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-customer-care_returns:<front>.
  $menu_links['menu-customer-care_returns:<front>'] = array(
    'menu_name' => 'menu-customer-care',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Returns',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-customer-care_returns:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-customer-care_shipping-info:user.
  $menu_links['menu-customer-care_shipping-info:user'] = array(
    'menu_name' => 'menu-customer-care',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Shipping info',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-customer-care_shipping-info:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-customer-care_size-guide:user/login.
  $menu_links['menu-customer-care_size-guide:user/login'] = array(
    'menu_name' => 'menu-customer-care',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Size guide',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-customer-care_size-guide:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-customer-care_sizes:<front>.
  $menu_links['menu-customer-care_sizes:<front>'] = array(
    'menu_name' => 'menu-customer-care',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Sizes',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-customer-care_sizes:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-information_careers:user.
  $menu_links['menu-menu-information_careers:user'] = array(
    'menu_name' => 'menu-menu-information',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Careers',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-information_careers:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-information_investor-relations:user/register.
  $menu_links['menu-menu-information_investor-relations:user/register'] = array(
    'menu_name' => 'menu-menu-information',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Investor relations',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-information_investor-relations:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-information_press-releases:<front>.
  $menu_links['menu-menu-information_press-releases:<front>'] = array(
    'menu_name' => 'menu-menu-information',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Press releases',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-information_press-releases:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-information_shop-with-points:contact.
  $menu_links['menu-menu-information_shop-with-points:contact'] = array(
    'menu_name' => 'menu-menu-information',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Shop with points',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-information_shop-with-points:contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Accessories');
  t('Back to school');
  t('Bags and Wallets');
  t('Basic');
  t('Black label');
  t('Blog');
  t('Boxed sidebar');
  t('Buy Theme');
  t('Caps & Hats');
  t('Careers');
  t('Category - 3 products per row');
  t('Category - 4 products per row');
  t('Category - 6 products per row');
  t('Category 1 column');
  t('Category 2 columns');
  t('Category 3 columns');
  t('Category Layouts');
  t('Coat and packas');
  t('Collections');
  t('Configurable product');
  t('Contact');
  t('Daily standards');
  t('Denim collection');
  t('Downloadable product');
  t('Features');
  t('Fragances');
  t('Gift cards');
  t('Glasses');
  t('Home');
  t('Home Carousel');
  t('Home Fluid');
  t('Home Parallax');
  t('Home Presentation');
  t('Home Simple');
  t('Home layouts');
  t('Investor relations');
  t('Jackets');
  t('Men\'s footweaar');
  t('Must Have');
  t('New Products');
  t('Press releases');
  t('Product Types');
  t('Product features');
  t('Product with Inner Zoom');
  t('Product with Lens Zoom round');
  t('Product with Lens Zoom square');
  t('Product with Related');
  t('Returns');
  t('Shipping info');
  t('Shop');
  t('Shop with points');
  t('Shorts');
  t('Simple Product');
  t('Size guide');
  t('Sizes');
  t('Suggestions');
  t('T-shirts');
  t('Trousers');
  t('Underwear');
  t('Virtual product');

  return $menu_links;
}
