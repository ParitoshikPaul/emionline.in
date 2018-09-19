<?php
/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function logancee_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];

  $form['site_information']['#weight'] = 1;
  $form['front_page']['default_nodes_main']['#value'] = 1;
  $form['admin_account']['#weight'] = 2;

  $form['site_information']['theme_name_radio'] = array(
    '#type' => 'radios',
    '#default_value' => 'loganceevisual_subtheme',
    '#options' => array(
      'loganceevisual_subtheme' => t('logancee Visual'),
    ),
    '#title' => t('What theme do you want set up as default?'),
  );

  $form['site_information']['theme_variation'] = array(
    '#type' => 'radios',
    '#default_value' => 'clothes',
    '#options' => array(
      'clothes' => t('Clothes'),
      'interior' => t('Interior Design'),
      'sunglasses' => t('Sunglasses'),
      'jewelry' => t('Jewelry'),
      'bags' => t('Bags'),
    ),
    '#title' => t('What theme do you want set up as default?'),
  );

  $form['#submit'][] = 'logancee_add_theme';
}

/**
 * Adds the selected theme to the site variables
 *
 */
function logancee_add_theme($form, &$form_state) {
  //die(var_dump($form['site_information']['theme_name_radio']['#value']));

  variable_set('selected_theme_name', $form['site_information']['theme_name_radio']['#value']);
  variable_set('selected_variation', $form['site_information']['theme_variation']['#value']);

}

/**
 * runs the tasks in the installation profile
 *
 */
function logancee_install_tasks($install_state) {

  $tasks = array();

  $tasks['select_theme'] = array(
    'display_name' => st('Install Theme'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'logancee_set_theme',
  );

  $tasks['insert_terms'] = array(
    'display_name' => st('Insert taxonomy terms'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'logancee_insert_terms',
  );

  $tasks['set_shortcodes'] = array(
    'display_name' => st('Install Shortcodes'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'logancee_set_shortcodes',
  );

  $tasks['insert_custom_blocks'] = array(
    'display_name' => st('Insert Custom blocks'),
    'display' => TRUE,
    'type' => 'batch',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'logancee_insert_custom_blocks_batch',
  );

  $tasks['insert_front_main_slides'] = array(
    'display_name' => st('Insert front main slides'),
    'display' => TRUE,
    'type' => 'batch',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'logancee_insert_front_main_slides_batch',
  );

  $tasks['insert_fluid_slides'] = array(
    'display_name' => st('Insert fluid main slides'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'logancee_insert_fluid_main_slides',
  );


  $tasks['insert_parallax_slides'] = array(
    'display_name' => st('Insert parallax slides'),
    'display' => TRUE,
    'type' => 'batch',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'logancee_insert_parallax_slides_batch',
  );

  $tasks['insert_multiscroll_slides'] = array(
    'display_name' => st('Insert multiscroll slides'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'logancee_insert_multiscroll_slides',
  );

  $tasks['insert_fluid_boxes'] = array(
    'display_name' => st('Insert fluid boxes'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'logancee_insert_fluid_boxes',
  );

  $tasks['insert_front_carousel'] = array(
    'display_name' => st('Insert front carousel'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'logancee_insert_front_carousel',
  );

  $tasks['insert_blog_items'] = array(
    'display_name' => st('Insert blog items'),
    'display' => TRUE,
    'type' => 'batch',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'logancee_insert_blog_items_batch',
  );

  $tasks['insert_products'] = array(
    'display_name' => st('Insert Products'),
    'display' => TRUE,
    'type' => 'batch',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'logancee_insert_products_batch',
  );

  $tasks['insert_pages'] = array(
    'display_name' => st('Insert page items'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'logancee_insert_pages',
  );

  $tasks['insert_clients'] = array(
    'display_name' => st('Insert Clients'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'logancee_insert_clients',
  );

  $tasks['insert_fluid2_slides'] = array(
    'display_name' => st('Insert fluid2 main slides'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'logancee_insert_fluid2_main_slides',
  );

  $tasks['insert_front_main_slides2'] = array(
    'display_name' => st('Insert front main slides2'),
    'display' => TRUE,
    'type' => 'batch',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'logancee_insert_front_main_slides2_batch',
  );

  $tasks['revert_features'] = array(
    'display_name' => st('Revert necessary features'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'logancee_revert_features',
  );

  $tasks['set_frontpage'] = array(
    'display_name' => st('Set frontpage settings'),
    'display' => TRUE,
    'type' => 'normal',
    'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    'function' => 'logancee_set_frontpage',
  );

  return $tasks;
}

function logancee_set_frontpage() {

  $preset = variable_get('selected_variation');

  $theme = variable_get('selected_theme_name');
  $var_name = 'theme_' . $theme . '_settings';
  $settings = variable_get($var_name, array());

  switch ($preset) {
    case 'interior':

      variable_set('site_frontpage', 'front-fluid2');

      $settings['page_style'] = 'full';
      $settings['footer_color'] = 'white';
      $settings['footer_style'] = 'menus';
      $settings['header_style'] = '3';

      break;

    case 'sunglasses':

      variable_set('site_frontpage', 'front-clients');

      $settings['page_style'] = 'full';
      $settings['footer_color'] = 'white';
      $settings['footer_style'] = 'menus';
      $settings['header_style'] = '2';

      break;

    case 'jewelry':

      variable_set('site_frontpage', 'front-clients');

      $settings['page_style'] = 'full';
      $settings['footer_color'] = 'white';
      $settings['footer_style'] = 'menus';
      $settings['header_style'] = '6';

      break;

    case 'bags':

      variable_set('site_frontpage', 'front-main2');

      $settings['page_style'] = 'full';
      $settings['footer_color'] = 'grey';
      $settings['footer_style'] = 'light';
      $settings['header_style'] = '7';

      break;

    default :
      break;
  }

  variable_set($var_name, $settings);

}

function logancee_revert_features() {
  $feature = features_get_features('logancee_menu');
  $components = array_keys($feature->info['features']);
  features_revert(array('logancee_menu' => $components));
  /**
   * Rebuild & Revert all enabled features.
   */
  //features_rebuild();
  //features_revert();
}

/**
 * Sets the default bootstrap shortcodes to be available for the editor
 *
 */
function logancee_set_shortcodes() {
  //set shortcodes variables
  // Load the format we want to work with.
  $format = filter_format_load('full_html');
  // Work-around for what *seems* to be a bug somewhere in Drupal filter
  // format loading/saving.  There's probably a better way, but this seems to work.
  if (empty($format->filters)) {
    // Get the filters used by this format.
    $filters = filter_list_format($format->format);
    // Build the $format->filters array...
    $format->filters = array();
    foreach ($filters as $name => $filter) {
      foreach ($filter as $k => $v) {
        $format->filters[$name][$k] = $v;
      }
    }
  }

  $format->filters["shortcode"]["status"] = "1";

  $shortcodes = shortcode_list_all();
  foreach ($shortcodes as $key => $shortcode) {
    $format->filters["shortcode"]["settings"][$key] = "1";
  }

  // ...
  // Save the updated format.
  filter_format_save($format);
}

/**
 * Sets the selected theme as the default theme
 *
 */
function logancee_set_theme() {

  $theme = variable_get('selected_theme_name');

  $enable = array(
    'theme_default' => $theme,
  );

  theme_enable($enable);
  variable_set('theme_default', $theme);

  theme_disable(array('bartik', 'seven'));

  $var_name = 'theme_' . $theme . '_settings';

  $settings = variable_get($var_name, array());

  //set the background image for products
  $image = 'profiles/logancee/content/images/image-category.jpg';
  $filepath = drupal_realpath($image);

  // Create managed File object and associate with Image field.
  $file = (object) array(
    'uid' => 1,
    'uri' => $filepath,
    'alt' => 'highlight',
    'filemime' => file_get_mimetype($filepath),
    'status' => FILE_STATUS_PERMANENT,
  );

  // We save the file to the root of the files directory.
  $file = file_copy($file, 'public://');
  file_usage_add($file, 'mantis', 'user', 1);

  $settings['background_products'] = $file->fid;

  //set the background image for products
  $image_login = 'profiles/logancee/content/images/image-category.jpg';
  $filepath_login = drupal_realpath($image_login);

  // Create managed File object and associate with Image field.
  $file_login = (object) array(
    'uid' => 1,
    'uri' => $filepath_login,
    'alt' => 'highlight',
    'filemime' => file_get_mimetype($filepath_login),
    'status' => FILE_STATUS_PERMANENT,
  );

  // We save the file to the root of the files directory.
  $file_login = file_copy($file_login, 'public://');
  file_usage_add($file_login, 'mantis', 'user', 1);

  $settings['background_login'] = $file_login->fid;

  //set the background image for cart
  $image_cart = 'profiles/logancee/content/images/image-category.jpg';
  $filepath_cart = drupal_realpath($image_cart);

  // Create managed File object and associate with Image field.
  $file_cart = (object) array(
    'uid' => 1,
    'uri' => $filepath_cart,
    'alt' => 'highlight',
    'filemime' => file_get_mimetype($filepath_cart),
    'status' => FILE_STATUS_PERMANENT,
  );

  // We save the file to the root of the files directory.
  $file_cart = file_copy($file_cart, 'public://');
  file_usage_add($file_cart, 'mantis', 'user', 1);

  $settings['background_cart'] = $file_cart->fid;

  //set the background image for blog
  $image_blog = 'profiles/logancee/content/images/image-blog.jpg';
  $filepath_blog = drupal_realpath($image_blog);

  // Create managed File object and associate with Image field.
  $file_blog = (object) array(
    'uid' => 1,
    'uri' => $filepath_blog,
    'alt' => 'highlight',
    'filemime' => file_get_mimetype($filepath_blog),
    'status' => FILE_STATUS_PERMANENT,
  );

  // We save the file to the root of the files directory.
  $file_blog = file_copy($file_blog, 'public://');
  file_usage_add($file_blog, 'mantis', 'user', 1);

  $settings['background_blog'] = $file_blog->fid;

  //set the background image for search
  $image_search = 'profiles/logancee/content/images/image-category.jpg';
  $filepath_search = drupal_realpath($image_search);

  // Create managed File object and associate with Image field.
  $file_search = (object) array(
    'uid' => 1,
    'uri' => $filepath_cart,
    'alt' => 'highlight',
    'filemime' => file_get_mimetype($filepath_search),
    'status' => FILE_STATUS_PERMANENT,
  );

  // We save the file to the root of the files directory.
  $file_search = file_copy($file_search, 'public://');
  file_usage_add($file_search, 'mantis', 'user', 1);

  $settings['background_search'] = $file_search->fid;

  $settings['bootstrap_breadcrumb'] = "1";
  $settings['bootstrap_region_well-sidebar_first'] = "";

  variable_set($var_name, $settings);

}

/**
 * Insert taxonomy terms
 *
 */
function logancee_insert_terms() {

  $langcode_current = $GLOBALS['language']->language;

  //Post type taxonomy
  $tag_category[0]['name'] = "Most wanted";
  $tag_category[1]['name'] = "Best seller";
  $tag_category[2]['name'] = "New arrivals";

  $voc = taxonomy_vocabulary_machine_name_load('tag_category');
  foreach ($tag_category as $tag_category_term) {
    $tag_category_term_item = new stdClass();
    $tag_category_term_item->name = $tag_category_term['name'];
    $tag_category_term_item->vid = $voc->vid;
    taxonomy_term_save($tag_category_term_item);
  }

  //Blog taxonomy
  $blog_category[0]['name'] = "Fashion";
  $blog_category[1]['name'] = "Trending";
  $blog_category[2]['name'] = "New";

  $voc = taxonomy_vocabulary_machine_name_load('blog_tags');
  foreach ($blog_category as $blog_category_term) {
    $blog_category_term_item = new stdClass();
    $blog_category_term_item->name = $blog_category_term['name'];
    $blog_category_term_item->vid = $voc->vid;
    taxonomy_term_save($blog_category_term_item);
  }

  //Shop catalog
  $shop_category[0] = array(
    'name' => "Suggestions",
    'field_taxonomytag' => array(
      $langcode_current => array(
        0 => array(
          'value' => 'new',
        ),
      ),
    ),
    'children' => array(
      0 => array(
        'name' => 'New Products',
      ),
      1 => array(
        'name' => 'Back to school',
      ),
      2 => array(
        'name' => 'Must have',
      ),
      3 => array(
        'name' => 'Denim collection',
        'field_taxonomytag' => array(
          $langcode_current => array(
            0 => array(
              'value' => 'new',
            ),
          ),
        ),
      ),
      4 => array(
        'name' => 'Daily standards',
      ),
      5 => array(
        'name' => 'Black label',
      ),
    ),
  );
  $shop_category[1] = array(
    'name' => "Collections",
    'field_taxonomytag' => array(
      $langcode_current => array(
        0 => array(
          'value' => 'hot',
        ),
      ),
    ),
    'children' => array(
      0 => array(
        'name' => 'Basic',
      ),
      1 => array(
        'name' => 'Coats and parkas',
        'field_taxonomytag' => array(
          $langcode_current => array(
            0 => array(
              'value' => 'new',
            ),
          ),
        ),
      ),
      2 => array(
        'name' => 'Shorts',
      ),
      3 => array(
        'name' => 'T-shirts',
      ),
      4 => array(
        'name' => 'Jackets',
      ),
      5 => array(
        'name' => 'Trousers',
      ),
    ),
  );

  $shop_category[2] = array(
    'name' => "Accessories",
    'children' => array(
      0 => array(
        'name' => 'Glasses',
      ),
      1 => array(
        'name' => 'Bags and wallets',
        'field_taxonomytag' => array(
          $langcode_current => array(
            0 => array(
              'value' => 'trendy',
            ),
          ),
        ),
      ),
      2 => array(
        'name' => 'Fragances',
      ),
      3 => array(
        'name' => 'Caps & Hats',
        'field_taxonomytag' => array(
          $langcode_current => array(
            0 => array(
              'value' => 'new',
            ),
          ),
        ),
      ),
      4 => array(
        'name' => 'Underwear',
      ),
      5 => array(
        'name' => "Men's footwear",
      ),
    ),
  );

  $voc = taxonomy_vocabulary_machine_name_load('shop_category');
  foreach ($shop_category as $shop_category_term) {
    $shop_category_term_item = new stdClass();
    $shop_category_term_item->name = $shop_category_term['name'];
    if (isset($shop_category_term['field_taxonomytag'])) {
      $shop_category_term_item->field_taxonomytag = $shop_category_term['field_taxonomytag'];
    }
    $shop_category_term_item->vid = $voc->vid;
    taxonomy_term_save($shop_category_term_item);

    //save the children
    foreach ($shop_category_term['children'] as $key => $shop_child_category_term) {
      $shop_category_term_item_child = new stdClass();
      $shop_category_term_item_child->name = $shop_child_category_term['name'];
      if (isset($shop_child_category_term['field_taxonomytag'])) {
        $shop_category_term_item_child->field_taxonomytag = $shop_child_category_term['field_taxonomytag'];
      }
      $shop_category_term_item_child->vid = $voc->vid;
      $shop_category_term_item_child->parent = $shop_category_term_item->tid;
      taxonomy_term_save($shop_category_term_item_child);
    }
  }

}

/**
 * Insert custom blocks batch
 */
function logancee_insert_custom_blocks_batch() {

  $batch = array(
    'operations' => array(
      array('logancee_insert_custom_blocks_batch_callback', array()),
    ),
    'finished' => 'logancee_batches_finished',
    // We can define custom messages instead of the default ones.
    'title' => t('Processing batch main slides'),
    'init_message' => t('Batch pages is starting.'),
    'progress_message' => t('Processed @current out of @total.'),
    'error_message' => t('Batch  pages has encountered an error.'),
  );

  return $batch;

}

function logancee_insert_custom_blocks_batch_callback(&$context) {

  $theme = variable_get('selected_theme_name');

  $dir_root = dirname(__FILE__);
  $path_theme = $dir_root . "";

  $dir = 'content';
  $account = NULL;

  $preset = "";

  $files = file_scan_directory($path_theme . '/' . $dir . '/' . $preset, '/\.content/', array('key' => 'name'));

  foreach ($files as $file) {

    if ($file->filename == "custom_blocks.content") {

      $custom_blocks = array();
      ob_start();

      require $file->uri;

      ob_end_clean();

      $custom_blocks = $custom_blocks;

      $number_of_items = sizeof($custom_blocks);

      //$delta_front_pages = (object) $delta_front_pages;

      if (!isset($context['sandbox']['progress'])) {
        $context['sandbox']['progress'] = 0;
        $context['sandbox']['current_node'] = 0;
        $context['sandbox']['max'] = $number_of_items;
      }
      // For this example, we decide that we can safely process
      // 1 nodes at a time without a timeout.
      $limit = 2;

      // With each pass through the callback, retrieve the next group of nids.
      if ($context['sandbox']['current_node'] == 0) {
        $result = array_slice($custom_blocks, $context['sandbox']['current_node'], $limit, TRUE);
      }
      else {
        $result = array_slice($custom_blocks, $context['sandbox']['current_node'] + 1, $limit, TRUE);
      }

      foreach ($result as $block_item) {

        $current_ind = array_search($block_item, $custom_blocks);

        $custom_block = $block_item;

        //CODE TO CREATE THE BLOCK
        $delta = db_insert('block_custom')
          ->fields(array(
            'body' => $custom_block['content'],
            'info' => $custom_block['description'],
            'format' => "full_html",
          ))
          ->execute();
        // Store block delta to allow other modules to work with new block.
        $custom_block_new_delta = $delta;
        $query = db_insert('block')->fields(array(
          'visibility',
          'pages',
          'custom',
          'title',
          'module',
          'theme',
          'region',
          'status',
          'weight',
          'delta',
          'cache',
        ));
        $query->values(array(
          'visibility' => (int) $custom_block['visibility'],
          'pages' => trim($custom_block['pages']),
          'custom' => 1,
          'title' => $custom_block['title'],
          'module' => "block",
          'theme' => $theme,
          'region' => $custom_block['region'],
          'status' => 1,
          'weight' => $custom_block['weight'],
          'delta' => $delta,
          'cache' => DRUPAL_NO_CACHE,
        ));
        $query->execute();

        // Store some result for post-processing in the finished callback.
        $context['results'][] = check_plain($custom_block['title']);
        // Update our progress information.
        $context['sandbox']['progress']++;
        $context['sandbox']['current_node'] = $current_ind;
        $context['message'] = t('Now processing %node items', array('%node' => $limit));
      }

      // Inform the batch engine that we are not finished,
      // and provide an estimation of the completion level we reached.
      if ($context['sandbox']['progress'] != $context['sandbox']['max']) {
        $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
      }

    }
  }

}

/**
 * Insert main slides batch
 */
function logancee_insert_front_main_slides_batch() {

  $batch = array(
    'operations' => array(
      array('logancee_insert_front_main_slides_batch_callback', array()),
    ),
    'finished' => 'logancee_batches_finished',
    // We can define custom messages instead of the default ones.
    'title' => t('Processing batch main slides'),
    'init_message' => t('Batch pages is starting.'),
    'progress_message' => t('Processed @current out of @total.'),
    'error_message' => t('Batch  pages has encountered an error.'),
  );

  return $batch;

}

function logancee_insert_front_main_slides_batch_callback(&$context) {

  $dir_root = dirname(__FILE__);
  $path_theme = $dir_root . "";

  $dir = 'content';
  $account = NULL;

  $node_languages = array(
    'pt-br',
    'it',
  );

  $preset = variable_get('selected_variation');

  $files = file_scan_directory($path_theme . '/' . $dir . '/' . $preset, '/\.content/', array('key' => 'name'));

  foreach ($files as $file) {

    if ($file->filename == "front_main_slides.content") {

      $front_main_slides = array();
      ob_start();

      require $file->uri;

      ob_end_clean();

      $front_main_slides = $front_main_slides;

      $number_of_items = sizeof($front_main_slides);

      //$delta_front_pages = (object) $delta_front_pages;

      if (!isset($context['sandbox']['progress'])) {
        $context['sandbox']['progress'] = 0;
        $context['sandbox']['current_node'] = 0;
        $context['sandbox']['max'] = $number_of_items;
      }

      // For this example, we decide that we can safely process
      // 1 nodes at a time without a timeout.
      $limit = 2;

      // With each pass through the callback, retrieve the next group of nids.
      if ($context['sandbox']['current_node'] == 0) {
        $result = array_slice($front_main_slides, $context['sandbox']['current_node'], $limit, TRUE);
      }
      else {
        $result = array_slice($front_main_slides, $context['sandbox']['current_node'] + 1, $limit, TRUE);
      }

      foreach ($result as $node_item) {

        $current_ind = array_search($node_item, $front_main_slides);

        $node = (object) $node_item;

        $node->uid = $account ? $account->uid : 1;

        if (is_array($node->field_background_image)) {

          $count_index = 0;
          foreach ($node->field_background_image as $image) {

            /**
             * Add a file.
             */
            // Some filepath on our system. It's the Druplicon! :D
            //$filepath = drupal_realpath('misc/' . $image);
            $filepath = drupal_realpath($image);

            // Create managed File object and associate with Image field.
            $file = (object) array(
              'uid' => 1,
              'uri' => $filepath,
              'alt' => 'highlight',
              'filemime' => file_get_mimetype($filepath),
              'status' => 1,
            );

            // We save the file to the root of the files directory.
            $file = file_copy($file, 'public://');

            $node->field_background_image["und"][$count_index] = (array) $file;
            $node->field_background_image["und"][$count_index]['fid'] = (string) $file->fid;

            $count_index = $count_index + 1;
          }

          //node_save((object) $node);
        }

        node_save($node);
        $node->tnid = $node->nid;
        node_save($node);

        $parent_nid = $node->tnid;

        foreach ($node_languages as $language) {

          $node_lang = (object) $node;
          unset($node->nid);
          unset($node->vid);
          unset($node->path);
          $node_lang->tnid = $parent_nid;
          $node_lang->language = $language;
          node_save($node_lang);

        }

        // Store some result for post-processing in the finished callback.
        $context['results'][] = check_plain($node->title);
        // Update our progress information.
        $context['sandbox']['progress']++;
        $context['sandbox']['current_node'] = $current_ind;
        $context['message'] = t('Now processing %node items', array('%node' => $limit));
      }

      // Inform the batch engine that we are not finished,
      // and provide an estimation of the completion level we reached.
      if ($context['sandbox']['progress'] != $context['sandbox']['max']) {
        $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
      }

    }
  }

}

/**
 * Insert main slides2 batch
 */
function logancee_insert_front_main_slides2_batch() {

  $batch = array(
    'operations' => array(
      array('logancee_insert_front_main_slides2_batch_callback', array()),
    ),
    'finished' => 'logancee_batches_finished',
    // We can define custom messages instead of the default ones.
    'title' => t('Processing batch main slides'),
    'init_message' => t('Batch pages is starting.'),
    'progress_message' => t('Processed @current out of @total.'),
    'error_message' => t('Batch  pages has encountered an error.'),
  );

  return $batch;

}

function logancee_insert_front_main_slides2_batch_callback(&$context) {

  $dir_root = dirname(__FILE__);
  $path_theme = $dir_root . "";

  $dir = 'content';
  $account = NULL;

  $node_languages = array(
    'pt-br',
    'it',
  );

  $preset = variable_get('selected_variation');

  $files = file_scan_directory($path_theme . '/' . $dir . '/' . $preset, '/\.content/', array('key' => 'name'));

  foreach ($files as $file) {

    if ($file->filename == "front_main_slides2.content") {

      $front_main_slides2 = array();
      ob_start();

      require $file->uri;

      ob_end_clean();

      $front_main_slides2 = $front_main_slides2;

      $number_of_items = sizeof($front_main_slides2);

      //$delta_front_pages = (object) $delta_front_pages;

      if (!isset($context['sandbox']['progress'])) {
        $context['sandbox']['progress'] = 0;
        $context['sandbox']['current_node'] = 0;
        $context['sandbox']['max'] = $number_of_items;
      }

      // For this example, we decide that we can safely process
      // 1 nodes at a time without a timeout.
      $limit = 2;

      // With each pass through the callback, retrieve the next group of nids.
      if ($context['sandbox']['current_node'] == 0) {
        $result = array_slice($front_main_slides2, $context['sandbox']['current_node'], $limit, TRUE);
      }
      else {
        $result = array_slice($front_main_slides2, $context['sandbox']['current_node'] + 1, $limit, TRUE);
      }

      foreach ($result as $node_item) {

        $current_ind = array_search($node_item, $front_main_slides2);

        $node = (object) $node_item;

        $node->uid = $account ? $account->uid : 1;

        if (is_array($node->field_background_image)) {

          $count_index = 0;
          foreach ($node->field_background_image as $image) {

            /**
             * Add a file.
             */
            // Some filepath on our system. It's the Druplicon! :D
            //$filepath = drupal_realpath('misc/' . $image);
            $filepath = drupal_realpath($image);

            // Create managed File object and associate with Image field.
            $file = (object) array(
              'uid' => 1,
              'uri' => $filepath,
              'alt' => 'highlight',
              'filemime' => file_get_mimetype($filepath),
              'status' => 1,
            );

            // We save the file to the root of the files directory.
            $file = file_copy($file, 'public://');

            $node->field_background_image["und"][$count_index] = (array) $file;
            $node->field_background_image["und"][$count_index]['fid'] = (string) $file->fid;

            $count_index = $count_index + 1;
          }

          //node_save((object) $node);
        }

        node_save($node);
        $node->tnid = $node->nid;
        node_save($node);

        $parent_nid = $node->tnid;

        foreach ($node_languages as $language) {

          $node_lang = (object) $node;
          unset($node->nid);
          unset($node->vid);
          unset($node->path);
          $node_lang->tnid = $parent_nid;
          $node_lang->language = $language;
          node_save($node_lang);

        }

        // Store some result for post-processing in the finished callback.
        $context['results'][] = check_plain($node->title);
        // Update our progress information.
        $context['sandbox']['progress']++;
        $context['sandbox']['current_node'] = $current_ind;
        $context['message'] = t('Now processing %node items', array('%node' => $limit));
      }

      // Inform the batch engine that we are not finished,
      // and provide an estimation of the completion level we reached.
      if ($context['sandbox']['progress'] != $context['sandbox']['max']) {
        $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
      }

    }
  }

}


/**
 * Insert fluid slides content into its content type
 *
 */
function logancee_insert_fluid_main_slides() {

  $theme = "logancee";

  $dir_root = dirname(__FILE__);
  $path_theme = $dir_root . "";

  $dir = 'content';
  $ext = 'content';
  $account = NULL;

  $path = dirname(__FILE__);

  $preset = variable_get('selected_variation');

  $files = file_scan_directory($path_theme . '/' . $dir . '/' . $preset, '/\.content/', array('key' => 'name'));

  foreach ($files as $file) {

    if ($file->filename == "front_fluid_slides.content") {

      $front_fluid_slides = array();
      ob_start();

      require $file->uri;

      ob_end_clean();

      $front_fluid_slides = (object) $front_fluid_slides;

      foreach ($front_fluid_slides as $node_item) {

        $node = (object) $node_item;

        $node->uid = $account ? $account->uid : 1;

        if (is_array($node->field_background_image)) {

          $count_index = 0;
          foreach ($node->field_background_image as $image) {

            /**
             * Add a file.
             */
            // Some filepath on our system. It's the Druplicon! :D
            //$filepath = drupal_realpath('misc/' . $image);
            $filepath = drupal_realpath($image);

            // Create managed File object and associate with Image field.
            $file = (object) array(
              'uid' => 1,
              'uri' => $filepath,
              'alt' => 'highlight',
              'filemime' => file_get_mimetype($filepath),
              'status' => 1,
            );

            // We save the file to the root of the files directory.
            $file = file_copy($file, 'public://');
            $node->field_background_image[LANGUAGE_NONE][$count_index] = (array) $file;
            $node->field_background_image[LANGUAGE_NONE][$count_index]['fid'] = (string) $file->fid;

            $count_index = $count_index + 1;
          }

          //node_save((object) $node);
        }

        node_save($node);
      }
    }
  }
}

/**
 * Insert fluid slides content into its content type
 *
 */
function logancee_insert_fluid2_main_slides() {

  $theme = "logancee";

  $dir_root = dirname(__FILE__);
  $path_theme = $dir_root . "";

  $dir = 'content';
  $ext = 'content';
  $account = NULL;

  $path = dirname(__FILE__);

  $preset = variable_get('selected_variation');

  $files = file_scan_directory($path_theme . '/' . $dir . '/' . $preset, '/\.content/', array('key' => 'name'));

  foreach ($files as $file) {

    if ($file->filename == "front_fluid2_slides.content") {

      $front_fluid2_slides = array();
      ob_start();

      require $file->uri;

      ob_end_clean();

      $front_fluid2_slides = (object) $front_fluid2_slides;

      foreach ($front_fluid2_slides as $node_item) {

        $node = (object) $node_item;

        $node->uid = $account ? $account->uid : 1;

        if (is_array($node->field_background_image)) {

          $count_index = 0;
          foreach ($node->field_background_image as $image) {

            /**
             * Add a file.
             */
            // Some filepath on our system. It's the Druplicon! :D
            //$filepath = drupal_realpath('misc/' . $image);
            $filepath = drupal_realpath($image);

            // Create managed File object and associate with Image field.
            $file = (object) array(
              'uid' => 1,
              'uri' => $filepath,
              'alt' => 'highlight',
              'filemime' => file_get_mimetype($filepath),
              'status' => 1,
            );

            // We save the file to the root of the files directory.
            $file = file_copy($file, 'public://');
            $node->field_background_image[LANGUAGE_NONE][$count_index] = (array) $file;
            $node->field_background_image[LANGUAGE_NONE][$count_index]['fid'] = (string) $file->fid;

            $count_index = $count_index + 1;
          }

          //node_save((object) $node);
        }

        node_save($node);
      }
    }
  }
}


/**
 * Insert parallax slides batch
 */
function logancee_insert_parallax_slides_batch() {

  $batch = array(
    'operations' => array(
      array('logancee_insert_parallax_slides_batch_callback', array()),
    ),
    'finished' => 'logancee_batches_finished',
    // We can define custom messages instead of the default ones.
    'title' => t('Processing batch main slides'),
    'init_message' => t('Batch pages is starting.'),
    'progress_message' => t('Processed @current out of @total.'),
    'error_message' => t('Batch  pages has encountered an error.'),
  );

  return $batch;

}

function logancee_insert_parallax_slides_batch_callback(&$context) {

  $dir_root = dirname(__FILE__);
  $path_theme = $dir_root . "";

  $dir = 'content';
  $account = NULL;

  $preset = "";

  $files = file_scan_directory($path_theme . '/' . $dir . '/' . $preset, '/\.content/', array('key' => 'name'));

  foreach ($files as $file) {

    if ($file->filename == "front_parallax_slides.content") {

      $front_parallax_slides = array();
      ob_start();

      require $file->uri;

      ob_end_clean();

      $front_parallax_slides = $front_parallax_slides;

      $number_of_items = sizeof($front_parallax_slides);

      //$delta_front_pages = (object) $delta_front_pages;

      if (!isset($context['sandbox']['progress'])) {
        $context['sandbox']['progress'] = 0;
        $context['sandbox']['current_node'] = 0;
        $context['sandbox']['max'] = $number_of_items;
      }

      // For this example, we decide that we can safely process
      // 1 nodes at a time without a timeout.
      $limit = 2;

      // With each pass through the callback, retrieve the next group of nids.
      if ($context['sandbox']['current_node'] == 0) {
        $result = array_slice($front_parallax_slides, $context['sandbox']['current_node'], $limit, TRUE);
      }
      else {
        $result = array_slice($front_parallax_slides, $context['sandbox']['current_node'] + 1, $limit, TRUE);
      }

      foreach ($result as $node_item) {

        $current_ind = array_search($node_item, $front_parallax_slides);

        $node = (object) $node_item;

        $node->uid = $account ? $account->uid : 1;

        if (is_array($node->field_background_image)) {

          $count_index = 0;
          foreach ($node->field_background_image as $image) {

            /**
             * Add a file.
             */
            // Some filepath on our system. It's the Druplicon! :D
            //$filepath = drupal_realpath('misc/' . $image);
            $filepath = drupal_realpath($image);

            // Create managed File object and associate with Image field.
            $file = (object) array(
              'uid' => 1,
              'uri' => $filepath,
              'alt' => 'highlight',
              'filemime' => file_get_mimetype($filepath),
              'status' => 1,
            );

            // We save the file to the root of the files directory.
            $file = file_copy($file, 'public://');
            $node->field_background_image[LANGUAGE_NONE][$count_index] = (array) $file;
            $node->field_background_image[LANGUAGE_NONE][$count_index]['fid'] = (string) $file->fid;

            $count_index = $count_index + 1;
          }

          //node_save((object) $node);
        }

        node_save($node);

        // Store some result for post-processing in the finished callback.
        $context['results'][] = check_plain($node->title);
        // Update our progress information.
        $context['sandbox']['progress']++;
        $context['sandbox']['current_node'] = $current_ind;
        $context['message'] = t('Now processing %node items', array('%node' => $limit));
      }

      // Inform the batch engine that we are not finished,
      // and provide an estimation of the completion level we reached.
      if ($context['sandbox']['progress'] != $context['sandbox']['max']) {
        $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
      }

    }
  }

}

/**
 * Insert fluid slides content into its content type
 *
 */
function logancee_insert_multiscroll_slides() {

  $theme = "logancee";

  $preset = variable_get('selected_preset_name');

  $dir_root = dirname(__FILE__);
  $path_theme = $dir_root . "";

  $dir = 'content';
  $ext = 'content';
  $account = NULL;

  $path = dirname(__FILE__);

  //$files = file_scan_directory($path . '/' . $dir, "\.content$");
//    die(var_dump($path_theme));

  $files = file_scan_directory($path_theme . '/' . $dir . '/' . $preset, '/\.content/', array('key' => 'name'));

  foreach ($files as $file) {

    if ($file->filename == "front_multiscroll_slides.content") {

      $front_multiscroll_slides = array();
      ob_start();

      require $file->uri;

      ob_end_clean();

      $front_multiscroll_slides = (object) $front_multiscroll_slides;

      foreach ($front_multiscroll_slides as $node_item) {

        $node = (object) $node_item;

        $node->uid = $account ? $account->uid : 1;

        if (is_array($node->field_background_image)) {

          $count_index = 0;
          foreach ($node->field_background_image as $image) {

            /**
             * Add a file.
             */
            // Some filepath on our system. It's the Druplicon! :D
            //$filepath = drupal_realpath('misc/' . $image);
            $filepath = drupal_realpath($image);

            // Create managed File object and associate with Image field.
            $file = (object) array(
              'uid' => 1,
              'uri' => $filepath,
              'alt' => 'highlight',
              'filemime' => file_get_mimetype($filepath),
              'status' => 1,
            );

            // We save the file to the root of the files directory.
            $file = file_copy($file, 'public://');
            $node->field_background_image[LANGUAGE_NONE][$count_index] = (array) $file;
            $node->field_background_image[LANGUAGE_NONE][$count_index]['fid'] = (string) $file->fid;

            $count_index = $count_index + 1;
          }

          //node_save((object) $node);
        }

        node_save($node);
      }
    }
  }
}

/**
 * Insert fluid slides content into its content type
 *
 */
function logancee_insert_fluid_boxes() {

  $theme = "logancee";

  $preset = variable_get('selected_preset_name');

  $dir_root = dirname(__FILE__);
  $path_theme = $dir_root . "";

  $dir = 'content';
  $ext = 'content';
  $account = NULL;

  $path = dirname(__FILE__);

  //$files = file_scan_directory($path . '/' . $dir, "\.content$");
//    die(var_dump($path_theme));

  $files = file_scan_directory($path_theme . '/' . $dir . '/' . $preset, '/\.content/', array('key' => 'name'));

  foreach ($files as $file) {

    if ($file->filename == "fluid_boxes.content") {

      $fluid_boxes = array();
      ob_start();

      require $file->uri;

      ob_end_clean();

      $fluid_boxes = (object) $fluid_boxes;

      foreach ($fluid_boxes as $node_item) {

        $node = (object) $node_item;

        $node->uid = $account ? $account->uid : 1;

        if (is_array($node->field_featured_image)) {

          $count_index = 0;
          foreach ($node->field_featured_image as $image) {

            /**
             * Add a file.
             */
            // Some filepath on our system. It's the Druplicon! :D
            //$filepath = drupal_realpath('misc/' . $image);
            $filepath = drupal_realpath($image);

            // Create managed File object and associate with Image field.
            $file = (object) array(
              'uid' => 1,
              'uri' => $filepath,
              'alt' => 'highlight',
              'filemime' => file_get_mimetype($filepath),
              'status' => 1,
            );

            // We save the file to the root of the files directory.
            $file = file_copy($file, 'public://');
            $node->field_featured_image[LANGUAGE_NONE][$count_index] = (array) $file;
            $node->field_featured_image[LANGUAGE_NONE][$count_index]['fid'] = (string) $file->fid;

            $count_index = $count_index + 1;
          }

          //node_save((object) $node);
        }

        node_save($node);
      }
    }
  }
}


/**
 * Insert front slides content into its content type
 *
 */
function logancee_insert_front_carousel() {

  $theme = "logancee";

  $preset = variable_get('selected_preset_name');

  $dir_root = dirname(__FILE__);
  $path_theme = $dir_root . "";

  $dir = 'content';
  $ext = 'content';
  $account = NULL;

  $path = dirname(__FILE__);

  //$files = file_scan_directory($path . '/' . $dir, "\.content$");
//    die(var_dump($path_theme));

  $files = file_scan_directory($path_theme . '/' . $dir . '/' . $preset, '/\.content/', array('key' => 'name'));

  foreach ($files as $file) {

    if ($file->filename == "front_carousel.content") {

      $front_carousels = array();
      ob_start();

      require $file->uri;

      ob_end_clean();

      $front_carousels = (object) $front_carousels;

      foreach ($front_carousels as $node_item) {

        $node = (object) $node_item;

        $node->uid = $account ? $account->uid : 1;

        if (is_array($node->field_background_image)) {

          $count_index = 0;
          foreach ($node->field_background_image as $image) {

            /**
             * Add a file.
             */
            // Some filepath on our system. It's the Druplicon! :D
            //$filepath = drupal_realpath('misc/' . $image);
            $filepath = drupal_realpath($image);

            // Create managed File object and associate with Image field.
            $file = (object) array(
              'uid' => 1,
              'uri' => $filepath,
              'alt' => 'highlight',
              'filemime' => file_get_mimetype($filepath),
              'status' => 1,
            );

            // We save the file to the root of the files directory.
            $file = file_copy($file, 'public://');

            $node->field_background_image[LANGUAGE_NONE][$count_index] = (array) $file;
            $node->field_background_image[LANGUAGE_NONE][$count_index]['fid'] = (string) $file->fid;

            $count_index = $count_index + 1;
          }

          //node_save((object) $node);
        }

        node_save($node);
      }
    }
  }
}

/**
 * Insert parallax slides batch
 */
function logancee_insert_blog_items_batch() {

  $batch = array(
    'operations' => array(
      array('logancee_insert_blog_items_batch_callback', array()),
    ),
    'finished' => 'logancee_batches_finished',
    // We can define custom messages instead of the default ones.
    'title' => t('Processing batch main slides'),
    'init_message' => t('Batch pages is starting.'),
    'progress_message' => t('Processed @current out of @total.'),
    'error_message' => t('Batch  pages has encountered an error.'),
  );

  return $batch;

}

function logancee_insert_blog_items_batch_callback(&$context) {

  $dir_root = dirname(__FILE__);
  $path_theme = $dir_root . "";

  $dir = 'content';
  $account = NULL;

  $preset = "";

  $files = file_scan_directory($path_theme . '/' . $dir . '/' . $preset, '/\.content/', array('key' => 'name'));

  foreach ($files as $file) {

    if ($file->filename == "blogs.content") {

      $blogs = array();
      ob_start();

      require $file->uri;

      ob_end_clean();

      $blogs = $blogs;

      $number_of_items = sizeof($blogs);

      //$delta_front_pages = (object) $delta_front_pages;

      if (!isset($context['sandbox']['progress'])) {
        $context['sandbox']['progress'] = 0;
        $context['sandbox']['current_node'] = 0;
        $context['sandbox']['max'] = $number_of_items;
      }

      // For this example, we decide that we can safely process
      // 1 nodes at a time without a timeout.
      $limit = 2;

      // With each pass through the callback, retrieve the next group of nids.
      if ($context['sandbox']['current_node'] == 0) {
        $result = array_slice($blogs, $context['sandbox']['current_node'], $limit, TRUE);
      }
      else {
        $result = array_slice($blogs, $context['sandbox']['current_node'] + 1, $limit, TRUE);
      }

      foreach ($result as $node_item) {

        $current_ind = array_search($node_item, $blogs);

        $node = (object) $node_item;

        $node->uid = $account ? $account->uid : 1;

        if (is_array($node->field_blog_image)) {

          $count_index = 0;
          foreach ($node->field_blog_image as $image) {

            /**
             * Add a file.
             */
            // Some filepath on our system. It's the Druplicon! :D
            //$filepath = drupal_realpath('misc/' . $image);
            $filepath = drupal_realpath($image);

            // Create managed File object and associate with Image field.
            $file = (object) array(
              'uid' => 1,
              'uri' => $filepath,
              'alt' => 'highlight',
              'filemime' => file_get_mimetype($filepath),
              'status' => 1,
            );

            // We save the file to the root of the files directory.
            $file = file_copy($file, 'public://');
            $node->field_blog_image[LANGUAGE_NONE][$count_index] = (array) $file;
            $node->field_blog_image[LANGUAGE_NONE][$count_index]['fid'] = (string) $file->fid;

            $count_index = $count_index + 1;
          }

          //node_save((object) $node);
        }

        //Save taxonomy
        $voc = taxonomy_vocabulary_machine_name_load('blog_tags');

        $count = 0;
        if (isset($node->field_category) && is_array($node->field_category)) {
          foreach ($node->field_category as $tag) {

            //check if term exists
            $term = taxonomy_get_term_by_name($tag['name'], 'blog_tags');

            if (is_array($term) && sizeof($term) > 0) {
              foreach ($term as $taxonomy_term) {
                $node->field_category[LANGUAGE_NONE][$count]['tid'] = $taxonomy_term->tid;
              }
            }
            else {
              $tag_term = new stdClass();
              $tag_term->name = $tag['name'];
              $tag_term->vid = $voc->vid;
              taxonomy_term_save($tag_term);

              $node->field_category[LANGUAGE_NONE][$count]['tid'] = $tag_term->tid;
            }
            $count++;
          }
        }

        node_save($node);

        // Store some result for post-processing in the finished callback.
        $context['results'][] = check_plain($node->title);
        // Update our progress information.
        $context['sandbox']['progress']++;
        $context['sandbox']['current_node'] = $current_ind;
        $context['message'] = t('Now processing %node items', array('%node' => $limit));
      }

      // Inform the batch engine that we are not finished,
      // and provide an estimation of the completion level we reached.
      if ($context['sandbox']['progress'] != $context['sandbox']['max']) {
        $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
      }

    }
  }

}

/**
 * Insert Basic pages content type
 *
 */
function logancee_insert_pages() {

  $theme = "logancee";

  $preset = variable_get('selected_preset_name');

  $dir_root = dirname(__FILE__);
  $path_theme = $dir_root . "";

  $dir = 'content';
  $ext = 'content';
  $account = NULL;

  $path = dirname(__FILE__);

  //$files = file_scan_directory($path . '/' . $dir, "\.content$");
//    die(var_dump($path_theme));

  $files = file_scan_directory($path_theme . '/' . $dir . '/' . $preset, '/\.content/', array('key' => 'name'));

  foreach ($files as $file) {

    if ($file->filename == "pages.content") {

      $pages = array();
      ob_start();

      require $file->uri;

      ob_end_clean();

      $pages = (object) $pages;

      foreach ($pages as $node_item) {

        $node = (object) $node_item;

        $node->uid = $account ? $account->uid : 1;

        if (is_array($node->field_banner_image)) {

          $count_index = 0;
          foreach ($node->field_banner_image as $image) {

            /**
             * Add a file.
             */
            // Some filepath on our system. It's the Druplicon! :D
            //$filepath = drupal_realpath('misc/' . $image);
            $filepath = drupal_realpath($image);

            // Create managed File object and associate with Image field.
            $file = (object) array(
              'uid' => 1,
              'uri' => $filepath,
              'alt' => 'highlight',
              'filemime' => file_get_mimetype($filepath),
              'status' => 1,
            );

            // We save the file to the root of the files directory.
            $file = file_copy($file, 'public://');
            $node->field_banner_image[LANGUAGE_NONE][$count_index] = (array) $file;
            $node->field_banner_image[LANGUAGE_NONE][$count_index]['fid'] = (string) $file->fid;

            $count_index = $count_index + 1;
          }

          //node_save((object) $node);
        }

        node_save($node);
      }
    }
  }
}

/**
 * Insert product displays
 */
function logancee_insert_products_batch() {

  $batch = array(
    'operations' => array(
      array('logancee_insert_products_batch_callback', array()),
    ),
    'finished' => 'logancee_batches_finished',
    // We can define custom messages instead of the default ones.
    'title' => t('Processing batch logancee products'),
    'init_message' => t('Batch pages is starting.'),
    'progress_message' => t('Processed @current out of @total.'),
    'error_message' => t('Batch  pages has encountered an error.'),
  );

  return $batch;

}

function logancee_insert_products_batch_callback(&$context) {

  $dir_root = dirname(__FILE__);
  $path_theme = $dir_root . "";

  $dir = 'content';
  $account = NULL;

  $node_languages = array(
    'pt-br',
    'it',
  );

  $preset = variable_get('selected_variation');

  $files = file_scan_directory($path_theme . '/' . $dir . '/' . $preset, '/\.content/', array('key' => 'name'));

  foreach ($files as $file) {

    if ($file->filename == "products.content") {

      $products = array();
      ob_start();

      require $file->uri;

      ob_end_clean();

      $products = $products;

      $number_of_items = sizeof($products);

      if (!isset($context['sandbox']['progress'])) {
        $context['sandbox']['progress'] = 0;
        $context['sandbox']['current_node'] = 0;
        $context['sandbox']['max'] = $number_of_items;
      }
      // For this example, we decide that we can safely process
      // 1 nodes at a time without a timeout.
      $limit = 3;

      // With each pass through the callback, retrieve the next group of nids.
      if ($context['sandbox']['current_node'] == 0) {
        $result = array_slice($products, $context['sandbox']['current_node'], $limit, TRUE);
      }
      else {
        $result = array_slice($products, $context['sandbox']['current_node'] + 1, $limit, TRUE);
      }

      foreach ($result as $node_item) {

        $current_ind = array_search($node_item, $products);

        $node = (object) $node_item;

        $node->uid = $account ? $account->uid : 1;


        $voc = taxonomy_vocabulary_machine_name_load('tag_category');

        $count = 0;
        if (isset($node->field_product_tag_category) && is_array($node->field_product_tag_category)) {
          foreach ($node->field_product_tag_category as $tag) {

            //check if term exists
            $term = taxonomy_get_term_by_name($tag['name'], 'tag_category');

            if (is_array($term) && sizeof($term) > 0) {
              foreach ($term as $taxonomy_term) {
                $node->field_product_tag_category["und"][$count]['tid'] = $taxonomy_term->tid;
              }
            }
            else {
              $tag_term = new stdClass();
              $tag_term->name = $tag['name'];
              $tag_term->vid = $voc->vid;
              taxonomy_term_save($tag_term);

              $node->field_product_tag_category["und"][$count]['tid'] = $tag_term->tid;
            }
            $count++;
          }
        }

        $voc = taxonomy_vocabulary_machine_name_load('shop_category');

        $count = 0;
        if (isset($node->field_shop_category) && is_array($node->field_shop_category)) {
          foreach ($node->field_shop_category as $tag) {

            //check if term exists
            $term = taxonomy_get_term_by_name($tag['name'], 'shop_category');

            if (is_array($term) && sizeof($term) > 0) {
              foreach ($term as $taxonomy_term) {
                $node->field_shop_category["und"][$count]['tid'] = $taxonomy_term->tid;
              }
            }
            else {
              $tag_term = new stdClass();
              $tag_term->name = $tag['name'];
              $tag_term->vid = $voc->vid;
              taxonomy_term_save($tag_term);

              $node->field_shop_category["und"][$count]['tid'] = $tag_term->tid;
            }
            $count++;
          }
        }

        node_save($node);

        $products_refs = $node->products;

        $count_index_product = 0;
        foreach ($products_refs as $prod) {

          $product_item = (object) $prod;

          //create the commerce products
          $product_type = $product_item->type;
          $product = commerce_product_new($product_type);
          $product->sku = $product_item->sku;
          $product->title = $product_item->title;
          $product->language = $product_item->language;
          $product->uid = $product_item->uid;
          $product->commerce_stock = $product_item->commerce_stock;

          if (isset($product_item->field_color)) {
            $product->field_color = $product_item->field_color;
          }
          if (isset($product_item->field_size)) {
            $product->field_size = $product_item->field_size;
          }
          $product->commerce_price[LANGUAGE_NONE][0] = $product_item->commerce_price;

          //Images
          if (isset($product_item->field_product_image) && is_array($product_item->field_product_image)) {

            $count_index = 0;
            foreach ($product_item->field_product_image as $image) {

              /**
               * Add a file.
               */
              // Some filepath on our system. It's the Druplicon! :D
              //$filepath = drupal_realpath('misc/' . $image);
              $filepath = drupal_realpath($image);

              // Create managed File object and associate with Image field.
              $file = (object) array(
                'uid' => 1,
                'uri' => $filepath,
                'alt' => 'image',
                'filemime' => file_get_mimetype($filepath),
                'status' => 1,
              );

              // We save the file to the root of the files directory.
              $file = file_copy($file, 'public://');

              $product->field_product_image["und"][$count_index] = (array) $file;
              $product->field_product_image["und"][$count_index]['fid'] = (string) $file->fid;

              $count_index = $count_index + 1;
            }
          }

          //Save the product
          commerce_product_save($product);
          $created_product = commerce_product_load_by_sku($product->sku);

          //save reference to product
          $node->field_product_reference['und'][$count_index_product]['product_id'] = $created_product->product_id;
          $count_index_product = $count_index_product + 1;
          node_save($node);
        }

        $node->tnid = $node->nid;
        node_save($node);

        $parent_nid = $node->nid;

        foreach ($node_languages as $language) {

          $node_lang = (object) $node;
          unset($node->nid);
          unset($node->vid);
          unset($node->path);
          $node_lang->tnid = $parent_nid;
          $node_lang->language = $language;
          node_save($node_lang);

        }

        // Store some result for post-processing in the finished callback.
        $context['results'][] = check_plain($node->title);
        // Update our progress information.
        $context['sandbox']['progress']++;
        $context['sandbox']['current_node'] = $current_ind;
        $context['message'] = t('Now processing %node items', array('%node' => $limit));
      }

      // Inform the batch engine that we are not finished,
      // and provide an estimation of the completion level we reached.
      if ($context['sandbox']['progress'] != $context['sandbox']['max']) {
        $context['finished'] = $context['sandbox']['progress'] / $context['sandbox']['max'];
      }

    }
  }

}

/**
 * Insert clients content into its content type
 *
 */
function logancee_insert_clients() {

  $theme = "logancee";

  $preset = variable_get('selected_variation');

  $dir_root = dirname(__FILE__);
  $path_theme = $dir_root . "";

  $dir = 'content';
  $ext = 'content';
  $account = NULL;

  $path = dirname(__FILE__);

  $files = file_scan_directory($path_theme . '/' . $dir . '/' . $preset, '/\.content/', array('key' => 'name'));

  foreach ($files as $file) {

    if ($file->filename == "clients.content") {

      $clients = array();
      ob_start();

      require $file->uri;

      ob_end_clean();

      $clients = (object) $clients;

      foreach ($clients as $node_item) {

        $node = (object) $node_item;

        $node->uid = $account ? $account->uid : 1;

        if (is_array($node->field_client_image)) {

          $count_index = 0;
          foreach ($node->field_client_image as $image) {

            /**
             * Add a file.
             */
            // Some filepath on our system. It's the Druplicon! :D
            //$filepath = drupal_realpath('misc/' . $image);
            $filepath = drupal_realpath($image);

            // Create managed File object and associate with Image field.
            $file = (object) array(
              'uid' => 1,
              'uri' => $filepath,
              'alt' => 'client_image',
              'filemime' => file_get_mimetype($filepath),
              'status' => 1,
            );

            // We save the file to the root of the files directory.
            $file = file_copy($file, 'public://');

            $node->field_client_image["und"][$count_index] = (array) $file;
            $node->field_client_image["und"][$count_index]['fid'] = (string) $file->fid;

            $count_index = $count_index + 1;
          }

          //node_save((object) $node);
        }

        node_save($node);
      }
    }
  }
}

/**
 * Batch 'finished' callback
 */
function logancee_batches_finished($success, $results, $operations) {
  if ($success) {
    // Here we do something meaningful with the results.
    $message = count($results) . ' processed.';
    $message .= theme('item_list', $results);  // D6 syntax
    drupal_set_message($message);
  }
  else {
    // An error occurred.
    // $operations contains the operations that remained unprocessed.
    $error_operation = reset($operations);
    $message = t('An error occurred while processing %error_operation with arguments: @arguments', array(
      '%error_operation' => $error_operation[0],
      '@arguments' => print_r($error_operation[1], TRUE),
    ));
    drupal_set_message($message, 'error');
  }
}
