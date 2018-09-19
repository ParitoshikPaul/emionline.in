<?php
/**
 * @file
 * Currency selector menu.
 *
 * Available variables:
 * $enabled_currencies
 * $user_currency
 */
?>
<div class="currency-sym">
  <a class="title"><span
      class="sym"><?php print commerce_currency_get_symbol(commerce_multicurrency_get_user_currency_code()); ?></span><?php print commerce_multicurrency_get_user_currency_code(); ?>
    <i
      class="fa fa-angle-down"></i></a></div>
<div class="currency-list">
  <ul class="clearfix currency_select_menu logancee_currency">
    <?php foreach ($enabled_currencies as $currency) : ?>
      <li
        class="<?php print $currency['code'] . (($currency['code'] == $user_currency) ? ' active' : NULL); ?>">
        <a href="<?php print url('commerce_currency_select/' . $currency['code'], array('query' => drupal_get_destination())); ?>">
          <span
            class="sym"><?php print commerce_currency_get_symbol($currency['code']); ?></span><span
            class="title"><?php print $currency['code']; ?></span>
        </a>
      </li>
    <?php endforeach; ?>
  </ul>
</div>