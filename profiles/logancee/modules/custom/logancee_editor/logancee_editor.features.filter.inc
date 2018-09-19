<?php
/**
 * @file
 * logancee_editor.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function logancee_editor_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 1,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'shortcode' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'tooltiptop' => 1,
          'tooltipright' => 1,
          'tooltipbottom' => 1,
          'tooltipleft' => 1,
          'popovertop' => 1,
          'popoverright' => 1,
          'popoverbottom' => 1,
          'popoverleft' => 1,
          'well' => 1,
          'well_large' => 1,
          'well_small' => 1,
          'panel' => 1,
          'glyphicons' => 1,
          'jumbotron' => 1,
          'blockquote' => 1,
          'blockquote_reverse' => 1,
          'abbr' => 1,
          'gridrow' => 1,
          'colhalf' => 1,
          'colthird' => 1,
          'colquarter' => 1,
          'helpers' => 1,
          'helpersbg' => 1,
          'inlinecode' => 1,
          'kbd' => 1,
          'pre' => 1,
          'preblock' => 1,
          'fontawesomeicon' => 1,
          'quote' => 1,
          'img' => 1,
          'highlight' => 1,
          'button' => 1,
          'dropcap' => 1,
          'item' => 1,
          'clear' => 1,
          'link' => 1,
          'random' => 1,
          'embed_content' => 1,
          'video' => 1,
        ),
      ),
      'filter_autop' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
