<?php
/**
 * @file
 * logancee_menu.features.tb_megamenu.inc
 */

/**
 * Implements hook_tb_megamenu_default_menus().
 */
function logancee_menu_tb_megamenu_default_menus() {
  return array(
    'main-menu|en' => array(
      'menu_name' => 'main-menu',
      'block_config' => array(
        'animation' => 'fading',
        'duration' => 400,
        'delay' => 200,
        'style' => '',
        'auto-arrow' => 0,
        'always-show-submenu' => 0,
      ),
      'menu_config' => array(
        0 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'About:node%2F55',
        ),
        1 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Suggestions:taxonomy%2Fterm%2F7',
                  ),
                ),
                'col_config' => array(
                  'width' => 3,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
              1 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Collections:taxonomy%2Fterm%2F14',
                  ),
                ),
                'col_config' => array(
                  'width' => 3,
                  'class' => '',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
              2 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Accessories:taxonomy%2Fterm%2F21',
                  ),
                ),
                'col_config' => array(
                  'width' => 3,
                  'class' => '',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
              3 => array(
                'col_content' => array(
                  0 => array(
                    'block_key' => 'block--1',
                    'type' => 'block',
                    'tb_item_config' => array(),
                  ),
                ),
                'col_config' => array(
                  'width' => 3,
                  'class' => 'menu-static-blocks',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => 900,
            'class' => 'tb-megamenu-full sub-wrapper show-sub',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label2 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'Hot',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Shop:shop',
        ),
        2 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Contact:contact',
        ),
        3 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Buy+Theme:user',
        ),
        4 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Blog:blog',
        ),
        5 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home:%3Cfront%3E',
        ),
        6 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Home+layouts:%3Cfront%3E',
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => 230,
            'class' => 'dropdown sub-wrapper show-sub',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'level-top m-dropdown mega_align_center parent',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Features:%3Cfront%3E',
        ),
        7 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Home+Simple:%3Cfront%3E',
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => 250,
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label2 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'Hot',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home+layouts:%3Cfront%3E',
        ),
        8 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Simple+Product:node%2F27',
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => 250,
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label2 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'Hot',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Product+Types:node%2F27',
        ),
        9 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Product+with+Lens+Zoom+round:node%2F25',
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => 280,
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label2 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'Hot',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Product+features:node%2F25',
        ),
        10 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'block_key' => 'block--4',
                    'type' => 'block',
                    'tb_item_config' => array(),
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
            1 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Glasses:taxonomy%2Fterm%2F22',
                  ),
                ),
                'col_config' => array(
                  'width' => '',
                  'class' => '',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 1,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 1,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Accessories:taxonomy%2Fterm%2F21',
        ),
        11 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Category+1+column:1col-shop',
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => 250,
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label2 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'Hot',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+Layouts:shop',
        ),
        12 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'block_key' => 'block--3',
                    'type' => 'block',
                    'tb_item_config' => array(),
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
            1 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Basic:taxonomy%2Fterm%2F15',
                  ),
                ),
                'col_config' => array(
                  'width' => '',
                  'class' => '',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 1,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 1,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Collections:taxonomy%2Fterm%2F14',
        ),
        13 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'block_key' => 'block--2',
                    'type' => 'block',
                    'tb_item_config' => array(),
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
            1 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'New+Products:taxonomy%2Fterm%2F8',
                  ),
                ),
                'col_config' => array(
                  'width' => '',
                  'class' => '',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 1,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 1,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Suggestions:taxonomy%2Fterm%2F7',
        ),
        14 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label1 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'New',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home+Carousel:front-carousel',
        ),
        15 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Shorts:taxonomy%2Fterm%2F17',
        ),
        16 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'New+Products:taxonomy%2Fterm%2F8',
        ),
        17 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label1 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'New',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home+Fluid:front-fluid',
        ),
        18 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'T-shirts:taxonomy%2Fterm%2F18',
        ),
        19 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Men%27s+footweaar:taxonomy%2Fterm%2F27',
        ),
        20 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Jackets:taxonomy%2Fterm%2F19',
        ),
        21 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Must+Have:taxonomy%2Fterm%2F10',
        ),
        22 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+-+6+products+per+row:shop-6-col',
        ),
        23 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+-+3+products+per+row:shop-3-col',
        ),
        24 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Glasses:taxonomy%2Fterm%2F22',
        ),
        25 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Underwear:taxonomy%2Fterm%2F26',
        ),
        26 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Basic:taxonomy%2Fterm%2F15',
        ),
        27 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+2+columns:shop',
        ),
        28 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+3+columns:shop-2-col',
        ),
        29 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+1+column:1col-shop',
        ),
        30 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+-+4+products+per+row:1col-shop',
        ),
        31 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Coat+and+packas:shop%2Fcoat-and-packas',
        ),
        32 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Trousers:taxonomy%2Fterm%2F20',
        ),
        33 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Back+to+school:taxonomy%2Fterm%2F9',
        ),
        34 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Product+with+Lens+Zoom+square:node%2F26',
        ),
        35 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Product+with+Related:node%2F29',
        ),
        36 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Simple+Product:node%2F27',
        ),
        37 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Product+with+Lens+Zoom+round:node%2F25',
        ),
        38 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Product+with+Inner+Zoom:node%2F27',
        ),
        39 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label1 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'New',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home+Parallax:front-parallax',
        ),
        40 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label1 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'New',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home+Presentation:front-multiscroll',
        ),
        41 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label1 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'New',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home+Simple:%3Cfront%3E',
        ),
        42 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Virtual+product:node%2F28',
        ),
        43 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Bags+and+Wallets:taxonomy%2Fterm%2F23',
        ),
        44 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Daily+standards:taxonomy%2Fterm%2F12',
        ),
        45 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Denim+collection:taxonomy%2Fterm%2F11',
        ),
        46 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Downloadable+product:node%2F29',
        ),
        47 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Configurable+product:node%2F25',
        ),
        48 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Caps+%26+Hats:shop%2Fcaps-and-hats',
        ),
        49 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Black+label:taxonomy%2Fterm%2F13',
        ),
        50 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label1 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'New',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Boxed+sidebar:front-sidebar',
        ),
        51 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Fragances:taxonomy%2Fterm%2F24',
        ),
      ),
      'language' => 'en',
    ),
    'main-menu|it' => array(
      'menu_name' => 'main-menu',
      'block_config' => array(
        'animation' => 'fading',
        'duration' => 400,
        'delay' => 200,
        'style' => '',
        'auto-arrow' => 1,
        'always-show-submenu' => 1,
      ),
      'menu_config' => array(
        0 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'About:node%2F55',
        ),
        1 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Suggestions:taxonomy%2Fterm%2F7',
                  ),
                ),
                'col_config' => array(
                  'width' => 3,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
              1 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Collections:taxonomy%2Fterm%2F14',
                  ),
                ),
                'col_config' => array(
                  'width' => 3,
                  'class' => '',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
              2 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Accessories:taxonomy%2Fterm%2F21',
                  ),
                ),
                'col_config' => array(
                  'width' => 3,
                  'class' => '',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
              3 => array(
                'col_content' => array(
                  0 => array(
                    'block_key' => 'block--1',
                    'type' => 'block',
                    'tb_item_config' => array(),
                  ),
                ),
                'col_config' => array(
                  'width' => 3,
                  'class' => 'menu-static-blocks',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => 900,
            'class' => 'tb-megamenu-full sub-wrapper show-sub',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label2 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'Hot',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Shop:shop',
        ),
        2 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Contact:contact',
        ),
        3 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Buy+Theme:user',
        ),
        4 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Blog:blog',
        ),
        5 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home:%3Cfront%3E',
        ),
        6 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Home+layouts:%3Cfront%3E',
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => 230,
            'class' => 'dropdown sub-wrapper show-sub',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'level-top m-dropdown mega_align_center parent',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Features:%3Cfront%3E',
        ),
        7 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Home+Simple:%3Cfront%3E',
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => 250,
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label2 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'Hot',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home+layouts:%3Cfront%3E',
        ),
        8 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Simple+Product:node%2F27',
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => 250,
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label2 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'Hot',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Product+Types:node%2F27',
        ),
        9 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Product+with+Lens+Zoom+round:node%2F25',
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => 280,
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label2 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'Hot',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Product+features:node%2F25',
        ),
        10 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'block_key' => 'block--4',
                    'type' => 'block',
                    'tb_item_config' => array(),
                  ),
                ),
                'col_config' => array(
                  'width' => '',
                  'class' => '',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
            ),
            1 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Glasses:taxonomy%2Fterm%2F22',
                  ),
                ),
                'col_config' => array(
                  'width' => '',
                  'class' => '',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 1,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 1,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Accessories:taxonomy%2Fterm%2F21',
        ),
        11 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Category+1+column:1col-shop',
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => 250,
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label2 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'Hot',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+Layouts:shop',
        ),
        12 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'block_key' => 'block--3',
                    'type' => 'block',
                    'tb_item_config' => array(),
                  ),
                ),
                'col_config' => array(
                  'width' => '',
                  'class' => '',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
            ),
            1 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Basic:taxonomy%2Fterm%2F15',
                  ),
                ),
                'col_config' => array(
                  'width' => '',
                  'class' => '',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 1,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 1,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Collections:taxonomy%2Fterm%2F14',
        ),
        13 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'block_key' => 'block--2',
                    'type' => 'block',
                    'tb_item_config' => array(),
                  ),
                ),
                'col_config' => array(
                  'width' => '',
                  'class' => '',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
            ),
            1 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'New+Products:taxonomy%2Fterm%2F8',
                  ),
                ),
                'col_config' => array(
                  'width' => '',
                  'class' => '',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 1,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 1,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Suggestions:taxonomy%2Fterm%2F7',
        ),
        14 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home+Carousel:front-carousel',
        ),
        15 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Shorts:taxonomy%2Fterm%2F17',
        ),
        16 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'New+Products:taxonomy%2Fterm%2F8',
        ),
        17 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home+Fluid:front-fluid',
        ),
        18 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'T-shirts:taxonomy%2Fterm%2F18',
        ),
        19 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Men%27s+footweaar:taxonomy%2Fterm%2F27',
        ),
        20 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Jackets:taxonomy%2Fterm%2F19',
        ),
        21 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Must+Have:taxonomy%2Fterm%2F10',
        ),
        22 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+-+6+products+per+row:shop-6-col',
        ),
        23 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+-+3+products+per+row:shop-3-col',
        ),
        24 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Glasses:taxonomy%2Fterm%2F22',
        ),
        25 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Underwear:taxonomy%2Fterm%2F26',
        ),
        26 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Basic:taxonomy%2Fterm%2F15',
        ),
        27 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+2+columns:shop',
        ),
        28 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+3+columns:shop-2-col',
        ),
        29 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+1+column:1col-shop',
        ),
        30 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+-+4+products+per+row:1col-shop',
        ),
        31 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Coat+and+packas:shop%2Fcoat-and-packas',
        ),
        32 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Trousers:taxonomy%2Fterm%2F20',
        ),
        33 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Back+to+school:taxonomy%2Fterm%2F9',
        ),
        34 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Product+with+Lens+Zoom+square:node%2F26',
        ),
        35 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Product+with+Related:node%2F29',
        ),
        36 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Simple+Product:node%2F27',
        ),
        37 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Product+with+Lens+Zoom+round:node%2F25',
        ),
        38 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Product+with+Inner+Zoom:node%2F27',
        ),
        39 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home+Parallax:front-parallax',
        ),
        40 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home+Presentation:front-multiscroll',
        ),
        41 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home+Simple:%3Cfront%3E',
        ),
        42 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Virtual+product:node%2F28',
        ),
        43 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Bags+and+Wallets:taxonomy%2Fterm%2F23',
        ),
        44 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Daily+standards:taxonomy%2Fterm%2F12',
        ),
        45 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Denim+collection:taxonomy%2Fterm%2F11',
        ),
        46 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Downloadable+product:node%2F29',
        ),
        47 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Configurable+product:node%2F25',
        ),
        48 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Caps+%26+Hats:shop%2Fcaps-and-hats',
        ),
        49 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Black+label:taxonomy%2Fterm%2F13',
        ),
        50 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Boxed+sidebar:front-sidebar',
        ),
        51 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Fragances:taxonomy%2Fterm%2F24',
        ),
      ),
      'language' => 'it',
    ),
    'main-menu|pt-br' => array(
      'menu_name' => 'main-menu',
      'block_config' => array(
        'animation' => 'fading',
        'duration' => 400,
        'delay' => 200,
        'style' => '',
        'auto-arrow' => 1,
        'always-show-submenu' => 1,
      ),
      'menu_config' => array(
        0 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'About:node%2F55',
        ),
        1 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Suggestions:taxonomy%2Fterm%2F7',
                  ),
                ),
                'col_config' => array(
                  'width' => 3,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
              1 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Collections:taxonomy%2Fterm%2F14',
                  ),
                ),
                'col_config' => array(
                  'width' => 3,
                  'class' => '',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
              2 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Accessories:taxonomy%2Fterm%2F21',
                  ),
                ),
                'col_config' => array(
                  'width' => 3,
                  'class' => '',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
              3 => array(
                'col_content' => array(
                  0 => array(
                    'block_key' => 'block--1',
                    'type' => 'block',
                    'tb_item_config' => array(),
                  ),
                ),
                'col_config' => array(
                  'width' => 3,
                  'class' => 'menu-static-blocks',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => 900,
            'class' => 'tb-megamenu-full sub-wrapper show-sub',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label2 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'Hot',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Shop:shop',
        ),
        2 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Contact:contact',
        ),
        3 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Buy+Theme:user',
        ),
        4 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Blog:blog',
        ),
        5 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home:%3Cfront%3E',
        ),
        6 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Home+layouts:%3Cfront%3E',
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => 230,
            'class' => 'dropdown sub-wrapper show-sub',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'level-top m-dropdown mega_align_center parent',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Features:%3Cfront%3E',
        ),
        7 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Home+Simple:%3Cfront%3E',
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => 250,
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label2 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'Hot',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home+layouts:%3Cfront%3E',
        ),
        8 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Simple+Product:node%2F27',
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => 250,
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label2 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'Hot',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Product+Types:node%2F27',
        ),
        9 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Product+with+Lens+Zoom+round:node%2F25',
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => 280,
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label2 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'Hot',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Product+features:node%2F25',
        ),
        10 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'block_key' => 'block--4',
                    'type' => 'block',
                    'tb_item_config' => array(),
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
            1 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Glasses:taxonomy%2Fterm%2F22',
                  ),
                ),
                'col_config' => array(
                  'width' => '',
                  'class' => '',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 1,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 1,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Accessories:taxonomy%2Fterm%2F21',
        ),
        11 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Category+1+column:1col-shop',
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => 250,
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => 'badge-cat-label badge-cat-label-label2 badge-pin-bottom',
            'xicon' => '',
            'caption' => 'Hot',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+Layouts:shop',
        ),
        12 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'block_key' => 'block--3',
                    'type' => 'block',
                    'tb_item_config' => array(),
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
            1 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'Basic:taxonomy%2Fterm%2F15',
                  ),
                ),
                'col_config' => array(
                  'width' => '',
                  'class' => '',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 1,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 1,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Collections:taxonomy%2Fterm%2F14',
        ),
        13 => array(
          'rows_content' => array(
            0 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'block_key' => 'block--2',
                    'type' => 'block',
                    'tb_item_config' => array(),
                  ),
                ),
                'col_config' => array(
                  'width' => 12,
                  'class' => '',
                  'hidewcol' => 0,
                  'showblocktitle' => 1,
                ),
              ),
            ),
            1 => array(
              0 => array(
                'col_content' => array(
                  0 => array(
                    'type' => 'menu_item',
                    'tb_item_config' => array(),
                    'identifier' => 'New+Products:taxonomy%2Fterm%2F8',
                  ),
                ),
                'col_config' => array(
                  'width' => '',
                  'class' => '',
                  'hidewcol' => '',
                  'showblocktitle' => 1,
                ),
              ),
            ),
          ),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 1,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 1,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Suggestions:taxonomy%2Fterm%2F7',
        ),
        14 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home+Carousel:front-carousel',
        ),
        15 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Shorts:taxonomy%2Fterm%2F17',
        ),
        16 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'New+Products:taxonomy%2Fterm%2F8',
        ),
        17 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home+Fluid:front-fluid',
        ),
        18 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'T-shirts:taxonomy%2Fterm%2F18',
        ),
        19 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Men%27s+footweaar:taxonomy%2Fterm%2F27',
        ),
        20 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Jackets:taxonomy%2Fterm%2F19',
        ),
        21 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Must+Have:taxonomy%2Fterm%2F10',
        ),
        22 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+-+6+products+per+row:shop-6-col',
        ),
        23 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+-+3+products+per+row:shop-3-col',
        ),
        24 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Glasses:taxonomy%2Fterm%2F22',
        ),
        25 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Underwear:taxonomy%2Fterm%2F26',
        ),
        26 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Basic:taxonomy%2Fterm%2F15',
        ),
        27 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+2+columns:shop',
        ),
        28 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+3+columns:shop-2-col',
        ),
        29 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+1+column:1col-shop',
        ),
        30 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Category+-+4+products+per+row:1col-shop',
        ),
        31 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Coat+and+packas:shop%2Fcoat-and-packas',
        ),
        32 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Trousers:taxonomy%2Fterm%2F20',
        ),
        33 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Back+to+school:taxonomy%2Fterm%2F9',
        ),
        34 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Product+with+Lens+Zoom+square:node%2F26',
        ),
        35 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Product+with+Related:node%2F29',
        ),
        36 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Simple+Product:node%2F27',
        ),
        37 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Product+with+Lens+Zoom+round:node%2F25',
        ),
        38 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Product+with+Inner+Zoom:node%2F27',
        ),
        39 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home+Parallax:front-parallax',
        ),
        40 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home+Presentation:front-multiscroll',
        ),
        41 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Home+Simple:%3Cfront%3E',
        ),
        42 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Virtual+product:node%2F28',
        ),
        43 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Bags+and+Wallets:taxonomy%2Fterm%2F23',
        ),
        44 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Daily+standards:taxonomy%2Fterm%2F12',
        ),
        45 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Denim+collection:taxonomy%2Fterm%2F11',
        ),
        46 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Downloadable+product:node%2F29',
        ),
        47 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Configurable+product:node%2F25',
        ),
        48 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Caps+%26+Hats:shop%2Fcaps-and-hats',
        ),
        49 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Black+label:taxonomy%2Fterm%2F13',
        ),
        50 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Boxed+sidebar:front-sidebar',
        ),
        51 => array(
          'rows_content' => array(),
          'submenu_config' => array(
            'width' => '',
            'class' => '',
            'group' => 0,
          ),
          'item_config' => array(
            'class' => '',
            'xicon' => '',
            'caption' => '',
            'alignsub' => '',
            'group' => 0,
            'hidewcol' => 0,
            'hidesub' => 0,
          ),
          'identifier' => 'Fragances:taxonomy%2Fterm%2F24',
        ),
      ),
      'language' => 'pt-br',
    ),
  );
}
