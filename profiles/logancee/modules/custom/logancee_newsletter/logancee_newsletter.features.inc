<?php
/**
 * @file
 * logancee_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function logancee_newsletter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_mailchimp_signup().
 */
function logancee_newsletter_default_mailchimp_signup() {
  $items = array();
  $items['logancee_signup'] = entity_import('mailchimp_signup', '{
    "name" : "logancee_signup",
    "mc_lists" : { "b5ab1d3388" : "b5ab1d3388" },
    "mode" : "1",
    "title" : "Logancee signup",
    "settings" : {
      "path" : "",
      "submit_button" : "Subscribe",
      "confirmation_message" : "You have been successfully subscribed.",
      "destination" : "",
      "mergefields" : {
        "EMAIL" : {"tag":"EMAIL","name":"Email Address","type":"email","required":true,"default_value":"","public":true,"display_order":1,"options":{"size":25}},
        "FNAME" : 0,
        "LNAME" : 0
      },
      "description" : "",
      "doublein" : 0,
      "include_interest_groups" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}
