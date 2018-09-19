<?php
/**
 * @file
 * logancee_catalog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function logancee_catalog_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'catalog_3_column';
  $context->description = '3 column catalog filter blocks';
  $context->tag = 'catalog_6_column_filter';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'shop_3_col' => 'shop_3_col',
        'shop_3_col:page_1' => 'shop_3_col:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-shop_3_col-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-shop_3_col-page_1',
          'region' => 'sidebar_first_sticky',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('3 column catalog filter blocks');
  t('catalog_6_column_filter');
  $export['catalog_3_column'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'catalog_6_column';
  $context->description = 'filter for 6 col catalog';
  $context->tag = 'catalog_6_column_filter';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'shop_6_col' => 'shop_6_col',
        'shop_6_col:page_1' => 'shop_6_col:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-shop_6_col-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-shop_6_col-page_1',
          'region' => 'sidebar_first_sticky',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('catalog_6_column_filter');
  t('filter for 6 col catalog');
  $export['catalog_6_column'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'logancee_catalog_1col_filters';
  $context->description = 'Filters for 1 column catalog';
  $context->tag = 'logancee_catalog_1col';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'shop_1_column' => 'shop_1_column',
        'shop_1_column:page_1' => 'shop_1_column:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-shop_1_column-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-shop_1_column-page_1',
          'region' => 'sidebar_first_sticky',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Filters for 1 column catalog');
  t('logancee_catalog_1col');
  $export['logancee_catalog_1col_filters'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'logancee_catalog_2col';
  $context->description = 'Logancee catalog 2 filters';
  $context->tag = 'logancee_catalog_2_col_filters';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'shop_2_columns' => 'shop_2_columns',
        'shop_2_columns:page_1' => 'shop_2_columns:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'logancee_catalog-catalog_terms' => array(
          'module' => 'logancee_catalog',
          'delta' => 'catalog_terms',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views--exp-shop_2_columns-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-shop_2_columns-page_1',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'blog-recent' => array(
          'module' => 'blog',
          'delta' => 'recent',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Logancee catalog 2 filters');
  t('logancee_catalog_2_col_filters');
  $export['logancee_catalog_2col'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'logancee_list_catalog';
  $context->description = 'Logancee catalog filters for list';
  $context->tag = 'logancee_list_catalog_filters';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'shop_category_terms:page_1' => 'shop_category_terms:page_1',
        'shop_list' => 'shop_list',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'logancee_catalog-catalog_terms' => array(
          'module' => 'logancee_catalog',
          'delta' => 'catalog_terms',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views--exp-shop_list-page_1' => array(
          'module' => 'views',
          'delta' => '-exp-shop_list-page_1',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Logancee catalog filters for list');
  t('logancee_list_catalog_filters');
  $export['logancee_list_catalog'] = $context;

  return $export;
}
