<?php
/**
 * @file
 * logancee_payments.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function logancee_payments_default_rules_configuration() {
  $items = array();
  $items['rules_update_order_status_to_complete'] = entity_import('rules_config', '{ "rules_update_order_status_to_complete" : {
      "LABEL" : "Update order status to complete",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_order", "commerce_payment" ],
      "ON" : { "commerce_payment_order_paid_in_full" : [] },
      "DO" : [
        { "commerce_order_update_status" : { "commerce_order" : [ "commerce_order" ], "order_status" : "completed" } }
      ]
    }
  }');
  return $items;
}
