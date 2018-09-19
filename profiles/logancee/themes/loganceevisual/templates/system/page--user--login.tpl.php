<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup templates
 */

global $base_url;

?>

<div class="">

  <div class="typo-nav overlay overlay-contentscale">
    <button type="button" class="overlay-close"><span aria-hidden="true"
                                                      class="icon_close"></span>
    </button>
    <nav class="navbar">
      <ul class="nav-accordion">
        <li class="home"><a href="<?php print $front_page; ?>"><span
              class="fa fa-home"></span></a></li>
      </ul>
      <?php if (!empty($page['navigation_mobile'])): ?>
        <?php print render($page['navigation_mobile']); ?>
      <?php endif; ?>
    </nav>
  </div>

  <div class="<?php $page_version == 'boxed' ? print 'box-wrapper' : 'page-wrapper'; ?>">
    <div
      class="typo-wrapper <?php $page_version == 'boxed' ? print 'boxed' : ''; ?>">

      <?php if (!isset($header_version) || $header_version == 1): ?>

        <header class="header-container header-layout-1">

          <div class="header">
            <div class="header-top">
              <div class="container">
                <div class="header-top-inner">
                  <div class="row">
                    <div class="hidden-xs col-xs-12 col-sm-4 col-md-4 col-lg-3">
                      <?php if (!empty($page['language_switch'])): ?>
                        <div class="language-topbar">

                          <div class="lang-curr">
                            <a
                              class="title"><?php print $language_icon; ?><?php print $lang_name; ?>
                              <i
                                class="fa fa-angle-down"></i></a></div>
                          <div class="lang-list">
                            <?php print render($page['language_switch']); ?>
                          </div>
                        </div>
                        <span class="delimiter"></span>
                      <?php endif; ?>

                      <div class="currency-topbar">
                        <?php if (!empty($page['currency'])): ?>
                          <?php print render($page['currency']); ?>
                        <?php endif; ?>
                      </div>
                    </div>
                    <div
                      class="top-bar-wrap hidden-xs col-xs-4 col-sm-5 col-md-4 col-lg-6">
                      <div class="top-bar">
                        <div class="inner-top-bar">
                          <?php global $user; ?>
                          <div
                            class="welcome-user login-topbar hidden-xs hidden-sm hidden-md">
                            Hi <?php print user_is_anonymous() ? t('Guest!') : $user->name; ?>
                          </div>
                          <?php if (user_is_anonymous()): ?>
                            <div class="hidden-xs login-topbar">
                              <a
                                href="<?php print $base_url . '/user/login'; ?>"><span><?php print t("Login"); ?></span></a>
                            </div>
                            <div class="hidden-xs register-topbar">
                              <a
                                href="<?php print $base_url . '/user/register'; ?>"><span><?php print t("Sign Up"); ?></span></a>
                            </div>
                          <?php else : ?>

                            <div class="hidden-xs login-topbar">
                              <a
                                href="<?php print $base_url . '/user'; ?>"><span><?php print t("Profile page"); ?></span></a>
                            </div>
                            <div class="hidden-xs register-topbar">
                              <a
                                href="<?php print $base_url . '/user/edit'; ?>"><span><?php print t("Edit profile"); ?></span></a>
                            </div>

                          <?php endif; ?>
                        </div>
                      </div>
                    </div>
                    <div
                      class="social-topbar col-xs-10 col-sm-3 col-md-4 col-lg-3">
                      <div class="social">
                        <ul class="social-icons small light">
                          <li class="twitter"><a
                              href="<?php print theme_get_setting('twitter_link'); ?>"
                              target="_blank"><i
                                class="fa fa-twitter"><span><?php print t("Twitter"); ?></span></i></a>
                          </li>
                          <li class="facebook"><a
                              href="<?php print theme_get_setting('facebook_link'); ?>"
                              target="_blank"><i
                                class="fa fa-facebook"><span><?php print t("Facebook"); ?></span></i></a>
                          </li>
                          <li class="gplus"><a
                              href="<?php print theme_get_setting('google_link'); ?>"
                              target="_blank"><i
                                class="fa fa-google-plus"><span><?php print t("Google plus"); ?></span></i></a>
                          </li>
                          <li class="instagram"><a
                              href="<?php print theme_get_setting('instagram_link'); ?>"
                              target="_blank"><i
                                class="fa fa-instagram"><span><?php print t("Instagram"); ?></span></i></a>
                          </li>
                          <li class="pinterest"><a
                              href="<?php print theme_get_setting('pinterest_link'); ?>"
                              target="_blank"><i
                                class="fa fa-pinterest-p"><span><?php print t("Pinterest"); ?></span></i></a>
                          </li>
                        </ul>
                      </div>
                    </div>
                    <div class="settings-topbar visible-xs-block col-xs-2">
                      <div class="settings">
                        <i class="icon-settings"></i>

                        <div class="settings-inner">
                          <div class="setting-content">
                            <div class="setting-language">
                              <div class="title">Select language</div>
                              <div class="language-topbar">
                                <?php if (!empty($page['language_switch'])): ?>
                                  <div class="lang-curr">
                                    <a
                                      class="title"><?php print $language_icon; ?><?php print $lang_name; ?>
                                      <i
                                        class="fa fa-angle-down"></i></a></div>
                                  <div class="lang-list">
                                    <?php print render($page['language_switch']); ?>
                                  </div>
                                <?php endif; ?>
                              </div>
                            </div>
                            <div class="setting-currency">
                              <div class="title">Select currency</div>
                              <div class="currency-topbar">
                                <?php if (!empty($page['currency'])): ?>
                                  <?php print render($page['currency']); ?>
                                <?php endif; ?>
                              </div>
                            </div>
                            <div class="setting-option">
                              <ul>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/user/login' ?>"><i
                                      class="icon-lock-open icons"></i><span><?php print t('Login / Register'); ?></span></a>
                                </li>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/user' ?>"><i
                                      class="icon-user icons"></i><span><?php print t('My Account'); ?></span></a>
                                </li>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/cart' ?>"><i
                                      class="icon-handbag icons"></i><span><?php print t('My Cart'); ?></span></a>
                                </li>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/checkout' ?>"><i
                                      class="icon-note icons"></i><span><?php print t('Checkout'); ?></span></a>
                                </li>
                              </ul>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>
                    <div class="compare-topbar block-top-compare">
                      <div class="compare-list">
                        <div class="maincompare">
                          <div class="ajax-over">
                            <div
                              class="typo-ajaxcompare typo-ajax-container"></div>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>

            <div class="header-content">
              <div class="container">
                <div class="header-inner">
                  <div class="row">
                    <div class="col-xs-3 col-sm-4 col-md-4 col-lg-4">
                      <div class="top-seach">
                        <div class="menu-bar-btn hidden-sm hidden-md hidden-lg">
                          <button
                            class="btn-nav cmn-toggle-switch cmn-toggle-switch__htx">
                            <span>toggle menu</span></button>
                        </div>
                        <div class="quick-search">
                          <div class="form-search">
                            <?php if (!empty($page['search'])): ?>
                              <?php print render($page['search']); ?>
                            <?php endif; ?>
                          </div>
                        </div>
                      </div>
                    </div>
                    <div class="col-xs-6 col-sm-4 col-md-4 col-lg-4">
                      <div class="logo-home">
                        <h1 class="logo">
                          <a href="<?php print $front_page; ?>"
                             title="<?php print $site_name; ?>">
                            <strong><?php print $site_name; ?></strong>
                            <img class="img-responsive"
                                 src="<?php print $logo; ?>"
                                 alt="<?php print $site_name; ?>">
                          </a>
                        </h1>
                      </div>
                    </div>
                    <div class="col-xs-3 col-sm-4 col-md-4 col-lg-4">
                      <div class="typo-top-cart cart-sticky ">
                        <div class="typo-maincart">
                          <div class="typo-cart">
                            <div class="typo-icon-ajaxcart">
                              <a class="typo-cart-label"
                                 href="<?php print $base_url . '/cart' ?>">
                        <span class="icon-cart"><i
                            class="icon-handbag icons"></i></span>
<span class="print">
<span class="items"><span
    class="qty-cart"><?php print $cart_items; ?></span> <span><?php print t('item(s)'); ?></span></span>
<span>-</span> <span><span class="price"><?php print $amount; ?></span></span>
</span>
                        <span class="icon-dropdown"><i
                            class="fa fa-angle-down"></i></span>
                              </a></div>
                            <div class="ajaxcart">
                              <div class="ajax-over" id="ajaxcart-scrollbar">
                                <div class="typo-ajax-container"><p
                                    class="no-items-in-cart"><?php print $cart_message; ?></p>
                                </div>
                              </div>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>

          <div id="typo-sticky-header-sticky-wrapper" class="sticky-wrapper"
               style="height: 60px;">
            <div class="header-menu" id="typo-sticky-header" style="">
              <div class="nav-top">
                <div class="container">
                  <div class="nav-top-inner clearfix hidden-xs">
                    <div class="logo-sticky" style="display:none;">
                      <a href="<?php print $front_page; ?>"
                         title="<?php print $site_name; ?>">
                        <strong><?php print $site_name; ?></strong>
                        <img class="img-responsive"
                             src="<?php print $logo; ?>"
                             alt="<?php print $site_name; ?>">
                      </a>
                    </div>
                    <div class="sticky-icon-group">
                      <div class="sticky-cart">
                        <div class="typo-maincart">
                          <div class="typo-cart">
                            <div class="typo-icon-ajaxcart">
                              <a class="typo-cart-label"
                                 href="<?php print $base_url . '/cart' ?>">
                          <span class="icon-cart"><i
                              class="icon-handbag icons"></i></span>
<span class="print">
<span class="items"><span
    class="qty-cart"><?php print $cart_items; ?></span> <span><?php print t("item(s)"); ?></span></span>
<span>-</span> <span><span class="price"><?php print $amount; ?></span></span>
</span>
                          <span class="icon-dropdown"><i
                              class="fa fa-angle-down"></i></span>
                              </a></div>
                          </div>
                        </div>
                      </div>
                      <div class="settings">
                        <i class="icon-settings"></i>

                        <div class="settings-inner">
                          <div class="setting-content">
                            <div class="setting-language">
                              <div class="title">Select language</div>
                              <div class="language-topbar">
                                <?php if (!empty($page['language_switch'])): ?>
                                  <div class="lang-curr">
                                    <a
                                      class="title"><?php print $language_icon; ?><?php print $lang_name; ?>
                                      <i
                                        class="fa fa-angle-down"></i></a></div>
                                  <div class="lang-list">
                                    <?php print render($page['language_switch']); ?>
                                  </div>
                                <?php endif; ?>
                              </div>
                            </div>
                            <div class="setting-currency">
                              <div class="title">Select currency</div>
                              <div class="currency-topbar">
                                <?php if (!empty($page['currency'])): ?>
                                  <?php print render($page['currency']); ?>
                                <?php endif; ?>
                              </div>
                            </div>
                            <div class="setting-option">
                              <ul>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/user/login' ?>"><i
                                      class="icon-lock-open icons"></i><span><?php print t('Login / Register'); ?></span></a>
                                </li>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/user' ?>"><i
                                      class="icon-user icons"></i><span><?php print t('My Account'); ?></span></a>
                                </li>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/cart' ?>"><i
                                      class="icon-handbag icons"></i><span><?php print t('My Cart'); ?></span></a>
                                </li>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/checkout' ?>"><i
                                      class="icon-note icons"></i><span><?php print t('Checkout'); ?></span></a>
                                </li>
                              </ul>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>
                    <div class="menu-bar-btn hidden-lg">
                      <button
                        class="btn-nav cmn-toggle-switch cmn-toggle-switch__htx">
                        <span>toggle menu</span></button>
                    </div>
                    <div class="main-menu visible-lg-inline-block">
                      <div class="typo-navigation hidden-xs">
                        <div class="typo-main-menu">
                          <?php print render($page['navigation']); ?>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </header>

      <?php elseif ($header_version == 2): ?>

        <header class="header-container header-layout-2">
          <div class="header">
            <div class="header-top">
              <div class="container">
                <div class="header-top-inner">
                  <div class="row">
                    <div class="col-xs-12 col-sm-12 col-md-6 col-lg-6">
                      <div class="home2-block-phone-email"><span
                          class="icon_mail">&nbsp;&nbsp;</span> Email:
                        <?php print variable_get('site_mail'); ?>
                      </div>
                    </div>
                    <div class="col-xs-12 col-sm-12 col-md-6 col-lg-6">
                      <div class="top-bar">
                        <div class="login-topbar">
                          <?php if (user_is_anonymous()): ?>
                            <a href="<?php print $base_url . '/user/login'; ?>"><i
                                aria-hidden="true" class="icon_lock">&nbsp;</i>
                              <span><?php print t('Login'); ?></span></a>
                          <?php else : ?>
                            <a href="<?php print $base_url . '/user'; ?>"><i
                                aria-hidden="true" class="icon_lock">&nbsp;</i>
                              <span><?php print t('My account'); ?></span></a>
                          <?php endif; ?>
                        </div>
                        <div class="currency-topbar">
                          <div class="currency-topbar">
                            <?php if (!empty($page['currency'])): ?>
                              <?php print render($page['currency']); ?>
                            <?php endif; ?>
                          </div>
                        </div>
                        <span class="delimiter"></span>

                        <div class="language-topbar">
                          <?php if (!empty($page['language_switch'])): ?>
                            <div class="lang-curr">
                              <a
                                class="title"><?php print $language_icon; ?><?php print $lang_name; ?>
                                <i
                                  class="fa fa-angle-down"></i></a></div>
                            <div class="lang-list">
                              <?php print render($page['language_switch']); ?>
                            </div>
                          <?php endif; ?>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
          <div id="typo-sticky-header-sticky-wrapper" class="sticky-wrapper"
               style="height: 130px;">
            <div class="header-menu" id="typo-sticky-header">
              <div class="nav-top">
                <div class="container">
                  <div class="nav-top-inner clearfix">
                    <div class="logo-home02">
                      <h1 class="logo">
                        <a href="<?php print $front_page; ?>"
                           title="<?php print $site_name; ?>">
                          <strong><?php print $site_name; ?></strong>
                          <img class="img-responsive"
                               src="<?php print $logo; ?>"
                               alt="<?php print $site_name; ?>">
                        </a>
                      </h1>
                    </div>
                    <div class="logo-sticky" style="display: none;">
                      <a href="<?php print $front_page; ?>"
                         title="<?php print $site_name; ?>">
                        <strong><?php print $site_name; ?></strong>
                        <img class="img-responsive"
                             src="<?php print $logo; ?>"
                             alt="<?php print $site_name; ?>">
                      </a>
                    </div>
                    <div class="menu-bar-btn hidden-lg">
                      <button
                        class="btn-nav cmn-toggle-switch cmn-toggle-switch__htx">
                        <span>toggle menu</span></button>
                    </div>
                    <div class="sticky-icon-group">
                      <div class="sticky-cart ">
                        <div class="typo-maincart">
                          <div class="typo-maincart">
                            <div class="typo-cart">
                              <div class="typo-icon-ajaxcart">
                                <a class="typo-cart-label"
                                   href="<?php print $base_url . '/cart' ?>">
                        <span class="icon-cart"><i
                            class="icon-handbag icons"></i></span>
<span class="print">
<span class="items"><span
    class="qty-cart"><?php print $cart_items; ?></span> <span><?php print t('item(s)'); ?></span></span>
<span>-</span> <span><span class="price"><?php print $amount; ?></span></span>
</span>
                        <span class="icon-dropdown"><i
                            class="fa fa-angle-down"></i></span>
                                </a></div>
                              <div class="ajaxcart">
                                <div class="ajax-over" id="ajaxcart-scrollbar">
                                  <div class="typo-ajax-container"><p
                                      class="no-items-in-cart"><?php print $cart_message; ?></p>
                                  </div>
                                </div>
                              </div>
                            </div>
                          </div>
                        </div>
                      </div>
                      <div class="settings">
                        <i class="icon-settings"></i>

                        <div class="settings-inner">
                          <div class="setting-content">
                            <div class="setting-language">
                              <div class="title">Select language</div>
                              <div class="language-topbar">
                                <?php if (!empty($page['language_switch'])): ?>
                                  <div class="lang-curr">
                                    <a
                                      class="title"><?php print $language_icon; ?><?php print $lang_name; ?>
                                      <i
                                        class="fa fa-angle-down"></i></a></div>
                                  <div class="lang-list">
                                    <?php print render($page['language_switch']); ?>
                                  </div>
                                <?php endif; ?>
                              </div>
                            </div>
                            <div class="setting-currency">
                              <div class="title">Select currency</div>
                              <div class="currency-topbar">
                                <?php if (!empty($page['currency'])): ?>
                                  <?php print render($page['currency']); ?>
                                <?php endif; ?>
                              </div>
                            </div>
                            <div class="setting-option">
                              <ul>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/user/login' ?>"><i
                                      class="icon-lock-open icons"></i><span><?php print t('Login / Register'); ?></span></a>
                                </li>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/user' ?>"><i
                                      class="icon-user icons"></i><span><?php print t('My Account'); ?></span></a>
                                </li>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/cart' ?>"><i
                                      class="icon-handbag icons"></i><span><?php print t('My Cart'); ?></span></a>
                                </li>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/checkout' ?>"><i
                                      class="icon-note icons"></i><span><?php print t('Checkout'); ?></span></a>
                                </li>
                              </ul>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>
                    <div class="main-menu visible-lg-inline-block">
                      <div class="typo-navigation hidden-xs">
                        <div class="typo-main-menu">
                          <?php print render($page['navigation']); ?>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </header>

      <?php elseif ($header_version == 3): ?>

        <header class="header-container header-layout-3">
          <div class="header-menu" id="typo-sticky-header-sticky-wrapper"
               class="sticky-wrapper">
            <div class="nav-top">
              <div class="container">
                <div class="nav-top-inner clearfix">
                  <div class="logo-home03">
                    <h1 class="logo">
                      <a href="<?php print $front_page; ?>"
                         title="<?php print $site_name; ?>">
                        <strong><?php print $site_name; ?></strong>
                        <img class="img-responsive"
                             src="<?php print $logo; ?>"
                             alt="<?php print $site_name; ?>">
                      </a>
                    </h1>
                  </div>
                  <div class="logo-sticky" style="display: none;">
                    <a href="<?php print $front_page; ?>"
                       title="<?php print $site_name; ?>">
                      <strong><?php print $site_name; ?></strong>
                      <img class="img-responsive"
                           src="<?php print $logo; ?>"
                           alt="<?php print $site_name; ?>">
                    </a>
                  </div>
                  <div class="menu-bar-btn hidden-lg">
                    <button
                      class="btn-nav cmn-toggle-switch cmn-toggle-switch__htx">
                      <span>toggle menu</span></button>
                  </div>
                  <div class="sticky-icon-group">
                    <div class="sticky-cart ">
                      <div class="typo-maincart">
                        <div class="typo-maincart">
                          <div class="typo-cart">
                            <div class="typo-icon-ajaxcart">
                              <a class="typo-cart-label"
                                 href="<?php print $base_url . '/cart' ?>">
                        <span class="icon-cart"><i
                            class="icon-handbag icons"></i></span>
<span class="print">
<span class="items"><span
    class="qty-cart"><?php print $cart_items; ?></span> <span><?php print t('item(s)'); ?></span></span>
<span>-</span> <span><span class="price"><?php print $amount; ?></span></span>
</span>
                        <span class="icon-dropdown"><i
                            class="fa fa-angle-down"></i></span>
                              </a></div>
                            <div class="ajaxcart">
                              <div class="ajax-over" id="ajaxcart-scrollbar">
                                <div class="typo-ajax-container"><p
                                    class="no-items-in-cart"><?php print $cart_message; ?></p>
                                </div>
                              </div>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>
                    <div class="settings">
                      <i class="icon-settings"></i>

                      <div class="settings-inner">
                        <div class="setting-content">
                          <div class="setting-language">
                            <div class="title">Select language</div>
                            <div class="language-topbar">
                              <?php if (!empty($page['language_switch'])): ?>
                                <div class="lang-curr">
                                  <a
                                    class="title"><?php print $language_icon; ?><?php print $lang_name; ?>
                                    <i
                                      class="fa fa-angle-down"></i></a></div>
                                <div class="lang-list">
                                  <?php print render($page['language_switch']); ?>
                                </div>
                              <?php endif; ?>
                            </div>
                          </div>
                          <div class="setting-currency">
                            <div class="title">Select currency</div>
                            <div class="currency-topbar">
                              <?php if (!empty($page['currency'])): ?>
                                <?php print render($page['currency']); ?>
                              <?php endif; ?>
                            </div>
                          </div>
                          <div class="setting-option">
                            <ul>
                              <li>
                                <a
                                  href="<?php print $base_url . '/user/login' ?>"><i
                                    class="icon-lock-open icons"></i><span><?php print t('Login / Register'); ?></span></a>
                              </li>
                              <li>
                                <a
                                  href="<?php print $base_url . '/user' ?>"><i
                                    class="icon-user icons"></i><span><?php print t('My Account'); ?></span></a>
                              </li>
                              <li>
                                <a
                                  href="<?php print $base_url . '/cart' ?>"><i
                                    class="icon-handbag icons"></i><span><?php print t('My Cart'); ?></span></a>
                              </li>
                              <li>
                                <a
                                  href="<?php print $base_url . '/checkout' ?>"><i
                                    class="icon-note icons"></i><span><?php print t('Checkout'); ?></span></a>
                              </li>
                            </ul>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                  <div class="main-menu visible-lg-inline-block">
                    <div class="typo-navigation hidden-xs">
                      <div class="typo-main-menu">
                        <?php print render($page['navigation']); ?>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </header>

      <?php elseif ($header_version == 4): ?>

        <header class="header-container header-layout-4">
          <div class="header-menu" id="typo-sticky-header-sticky-wrapper"
               class="sticky-wrapper">
            <div class="nav-top">
              <div class="container">
                <div class="nav-top-inner clearfix">
                  <div class="menu-bar-btn hidden-lg">
                    <button
                      class="btn-nav cmn-toggle-switch cmn-toggle-switch__htx">
                      <span>toggle menu</span></button>
                  </div>
                  <div class="logo-home04">
                    <h1 class="logo">
                      <a href="<?php print $front_page; ?>"
                         title="<?php print $site_name; ?>">
                        <strong><?php print $site_name; ?></strong>
                        <img class="img-responsive"
                             src="<?php print $logo; ?>"
                             alt="<?php print $site_name; ?>">
                      </a>
                    </h1>
                  </div>
                  <div class="logo-sticky" style="display: none;">
                    <a href="<?php print $front_page; ?>"
                       title="<?php print $site_name; ?>">
                      <strong><?php print $site_name; ?></strong>
                      <img class="img-responsive"
                           src="<?php print $logo; ?>"
                           alt="<?php print $site_name; ?>">
                    </a>
                  </div>
                  <div class="sticky-icon-group">
                    <div class="sticky-cart ">
                      <div class="typo-maincart">
                        <div class="typo-maincart">
                          <div class="typo-cart">
                            <div class="typo-icon-ajaxcart">
                              <a class="typo-cart-label"
                                 href="<?php print $base_url . '/cart' ?>">
                        <span class="icon-cart"><i
                            class="icon-handbag icons"></i></span>
<span class="print">
<span class="items"><span
    class="qty-cart"><?php print $cart_items; ?></span> <span><?php print t('item(s)'); ?></span></span>
<span>-</span> <span><span class="price"><?php print $amount; ?></span></span>
</span>
                        <span class="icon-dropdown"><i
                            class="fa fa-angle-down"></i></span>
                              </a></div>
                            <div class="ajaxcart">
                              <div class="ajax-over" id="ajaxcart-scrollbar">
                                <div class="typo-ajax-container"><p
                                    class="no-items-in-cart"><?php print $cart_message; ?></p>
                                </div>
                              </div>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>
                    <div class="settings">
                      <i class="icon-settings"></i>

                      <div class="settings-inner">
                        <div class="setting-content">
                          <div class="setting-language">
                            <div class="title">Select language</div>
                            <div class="language-topbar">
                              <?php if (!empty($page['language_switch'])): ?>
                                <div class="lang-curr">
                                  <a
                                    class="title"><?php print $language_icon; ?><?php print $lang_name; ?>
                                    <i
                                      class="fa fa-angle-down"></i></a></div>
                                <div class="lang-list">
                                  <?php print render($page['language_switch']); ?>
                                </div>
                              <?php endif; ?>
                            </div>
                          </div>
                          <div class="setting-currency">
                            <div class="title">Select currency</div>
                            <div class="currency-topbar">
                              <?php if (!empty($page['currency'])): ?>
                                <?php print render($page['currency']); ?>
                              <?php endif; ?>
                            </div>
                          </div>
                          <div class="setting-option">
                            <ul>
                              <li>
                                <a
                                  href="<?php print $base_url . '/user/login' ?>"><i
                                    class="icon-lock-open icons"></i><span><?php print t('Login / Register'); ?></span></a>
                              </li>
                              <li>
                                <a
                                  href="<?php print $base_url . '/user' ?>"><i
                                    class="icon-user icons"></i><span><?php print t('My Account'); ?></span></a>
                              </li>
                              <li>
                                <a
                                  href="<?php print $base_url . '/cart' ?>"><i
                                    class="icon-handbag icons"></i><span><?php print t('My Cart'); ?></span></a>
                              </li>
                              <li>
                                <a
                                  href="<?php print $base_url . '/checkout' ?>"><i
                                    class="icon-note icons"></i><span><?php print t('Checkout'); ?></span></a>
                              </li>
                            </ul>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                  <div class="main-menu visible-lg-inline-block">
                    <div class="typo-navigation hidden-xs">
                      <div class="typo-main-menu">
                        <?php print render($page['navigation']); ?>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </header>

      <?php elseif ($header_version == 5): ?>

        <header class="header-container header-layout-5">
          <div class="header">
            <div class="header-top">
              <div class="container">
                <div class="header-top-inner">
                  <div class="row">
                    <div class="hidden-xs col-xs-12 col-sm-6 col-md-6 col-lg-6">
                      <div
                        class="welcome-user hidden-xs"><?php print t("Hello guys ! Welcome to Logancee Store !"); ?></div>
                    </div>
                    <div class="col-xs-10 col-sm-6 col-md-6 col-lg-6">
                      <div class="store-cr hidden-xs">
                        <span class="delimiter"></span>

                        <?php if (!empty($page['language_switch'])): ?>
                          <div class="language-topbar">

                            <div class="lang-curr">
                              <a
                                class="title"><?php print $language_icon; ?><?php print $lang_name; ?>
                                <i
                                  class="fa fa-angle-down"></i></a></div>
                            <div class="lang-list">
                              <?php print render($page['language_switch']); ?>
                            </div>
                          </div>
                          <span class="delimiter"></span>
                        <?php endif; ?>

                        <div class="currency-topbar">
                          <?php if (!empty($page['currency'])): ?>
                            <?php print render($page['currency']); ?>
                          <?php endif; ?>
                        </div>
                      </div>
                      <div class="social">
                        <ul class="social-icons small light">
                          <li class="twitter"><a
                              href="<?php print theme_get_setting('twitter_link'); ?>"
                              target="_blank"><i
                                class="fa fa-twitter"><span><?php print t("Twitter"); ?></span></i></a>
                          </li>
                          <li class="facebook"><a
                              href="<?php print theme_get_setting('facebook_link'); ?>"
                              target="_blank"><i
                                class="fa fa-facebook"><span><?php print t("Facebook"); ?></span></i></a>
                          </li>
                          <li class="gplus"><a
                              href="<?php print theme_get_setting('google_link'); ?>"
                              target="_blank"><i
                                class="fa fa-google-plus"><span><?php print t("Google plus"); ?></span></i></a>
                          </li>
                          <li class="instagram"><a
                              href="<?php print theme_get_setting('instagram_link'); ?>"
                              target="_blank"><i
                                class="fa fa-instagram"><span><?php print t("Instagram"); ?></span></i></a>
                          </li>
                          <li class="pinterest"><a
                              href="<?php print theme_get_setting('pinterest_link'); ?>"
                              target="_blank"><i
                                class="fa fa-pinterest-p"><span><?php print t("Pinterest"); ?></span></i></a>
                          </li>
                        </ul>
                      </div>
                    </div>
                    <div class="settings-topbar visible-xs-block col-xs-2">
                      <div class="settings">
                        <i class="icon-settings"></i>

                        <div class="settings-inner">
                          <div class="setting-content">
                            <div class="setting-language">
                              <div class="title">Select language</div>
                              <div class="language-topbar">
                                <?php if (!empty($page['language_switch'])): ?>
                                  <div class="lang-curr">
                                    <a
                                      class="title"><?php print $language_icon; ?><?php print $lang_name; ?>
                                      <i
                                        class="fa fa-angle-down"></i></a></div>
                                  <div class="lang-list">
                                    <?php print render($page['language_switch']); ?>
                                  </div>
                                <?php endif; ?>
                              </div>
                            </div>
                            <div class="setting-currency">
                              <div class="title">Select currency</div>
                              <div class="currency-topbar">
                                <?php if (!empty($page['currency'])): ?>
                                  <?php print render($page['currency']); ?>
                                <?php endif; ?>
                              </div>
                            </div>
                            <div class="setting-option">
                              <ul>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/user/login' ?>"><i
                                      class="icon-lock-open icons"></i><span><?php print t('Login / Register'); ?></span></a>
                                </li>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/user' ?>"><i
                                      class="icon-user icons"></i><span><?php print t('My Account'); ?></span></a>
                                </li>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/cart' ?>"><i
                                      class="icon-handbag icons"></i><span><?php print t('My Cart'); ?></span></a>
                                </li>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/checkout' ?>"><i
                                      class="icon-note icons"></i><span><?php print t('Checkout'); ?></span></a>
                                </li>
                              </ul>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
            <div class="header-content">
              <div class="container">
                <div class="header-inner">
                  <div class="row">
                    <div
                      class="col-xs-3 col-sm-4 col-md-4 col-lg-5 col-sm-push-4 col-lg-push-4">
                      <div class="top-seach">
                        <div class="menu-bar-btn hidden-sm hidden-md hidden-lg">
                          <button
                            class="btn-nav cmn-toggle-switch cmn-toggle-switch__htx">
                            <span>toggle menu</span></button>
                        </div>
                        <div class="quick-search">
                          <div class="form-search">
                            <?php if (!empty($page['search'])): ?>
                              <?php print render($page['search']); ?>
                            <?php endif; ?>
                          </div>
                        </div>
                      </div>
                    </div>
                    <div
                      class="col-xs-6 col-sm-4 col-md-4 col-lg-4 col-sm-pull-4 col-lg-pull-5">
                      <div class="logo-home">
                        <h1 class="logo">
                          <a href="<?php print $front_page; ?>"
                             title="<?php print $site_name; ?>">
                            <strong><?php print $site_name; ?></strong>
                            <img class="img-responsive"
                                 src="<?php print $logo; ?>"
                                 alt="<?php print $site_name; ?>">
                          </a>
                        </h1>
                      </div>
                    </div>
                    <div class="col-xs-3 col-sm-4 col-md-4 col-lg-3">
                      <div class="typo-top-cart cart-sticky ">
                        <div class="typo-maincart">
                          <div class="typo-cart">
                            <div class="typo-icon-ajaxcart">
                              <a class="typo-cart-label"
                                 href="<?php print $base_url . '/cart' ?>">
                        <span class="icon-cart"><i
                            class="icon-handbag icons"></i></span>
<span class="print">
<span class="items"><span
    class="qty-cart"><?php print $cart_items; ?></span> <span><?php print t('item(s)'); ?></span></span>
<span>-</span> <span><span class="price"><?php print $amount; ?></span></span>
</span>
                        <span class="icon-dropdown"><i
                            class="fa fa-angle-down"></i></span>
                              </a></div>
                            <div class="ajaxcart">
                              <div class="ajax-over" id="ajaxcart-scrollbar">
                                <div class="typo-ajax-container"><p
                                    class="no-items-in-cart"><?php print $cart_message; ?></p>
                                </div>
                              </div>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
          <div class="header-menu" id="typo-sticky-header">
            <div class="nav-top">
              <div class="container">
                <div class="nav-top-inner clearfix hidden-xs">
                  <div class="logo-sticky" style="display:none;">
                    <a href="<?php print $front_page; ?>"
                       title="<?php print $site_name; ?>">
                      <strong><?php print $site_name; ?></strong>
                      <img class="img-responsive"
                           src="<?php print $logo; ?>"
                           alt="<?php print $site_name; ?>">
                    </a>
                  </div>
                  <div class="sticky-icon-group">
                    <div class="sticky-cart">
                      <div class="typo-maincart">
                        <div class="typo-cart">
                          <div class="typo-icon-ajaxcart">
                            <a class="typo-cart-label"
                               href="<?php print $base_url . '/cart' ?>">
                          <span class="icon-cart"><i
                              class="icon-handbag icons"></i></span>
<span class="print">
<span class="items"><span
    class="qty-cart"><?php print $cart_items; ?></span> <span><?php print t("item(s)"); ?></span></span>
<span>-</span> <span><span class="price"><?php print $amount; ?></span></span>
</span>
                          <span class="icon-dropdown"><i
                              class="fa fa-angle-down"></i></span>
                            </a></div>
                        </div>
                      </div>
                    </div>
                    <div class="settings">
                      <i class="icon-settings"></i>

                      <div class="settings-inner">
                        <div class="setting-content">
                          <div class="setting-language">
                            <div class="title">Select language</div>
                            <div class="language-topbar">
                              <?php if (!empty($page['language_switch'])): ?>
                                <div class="lang-curr">
                                  <a
                                    class="title"><?php print $language_icon; ?><?php print $lang_name; ?>
                                    <i
                                      class="fa fa-angle-down"></i></a></div>
                                <div class="lang-list">
                                  <?php print render($page['language_switch']); ?>
                                </div>
                              <?php endif; ?>
                            </div>
                          </div>
                          <div class="setting-currency">
                            <div class="title">Select currency</div>
                            <div class="currency-topbar">
                              <?php if (!empty($page['currency'])): ?>
                                <?php print render($page['currency']); ?>
                              <?php endif; ?>
                            </div>
                          </div>
                          <div class="setting-option">
                            <ul>
                              <li>
                                <a
                                  href="<?php print $base_url . '/user/login' ?>"><i
                                    class="icon-lock-open icons"></i><span><?php print t('Login / Register'); ?></span></a>
                              </li>
                              <li>
                                <a
                                  href="<?php print $base_url . '/user' ?>"><i
                                    class="icon-user icons"></i><span><?php print t('My Account'); ?></span></a>
                              </li>
                              <li>
                                <a
                                  href="<?php print $base_url . '/cart' ?>"><i
                                    class="icon-handbag icons"></i><span><?php print t('My Cart'); ?></span></a>
                              </li>
                              <li>
                                <a
                                  href="<?php print $base_url . '/checkout' ?>"><i
                                    class="icon-note icons"></i><span><?php print t('Checkout'); ?></span></a>
                              </li>
                            </ul>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                  <div class="menu-bar-btn hidden-lg">
                    <button
                      class="btn-nav cmn-toggle-switch cmn-toggle-switch__htx">
                      <span>toggle menu</span></button>
                  </div>
                  <div class="main-menu visible-lg-inline-block">
                    <div class="typo-navigation hidden-xs">
                      <div class="typo-main-menu">
                        <?php print render($page['navigation']); ?>
                      </div>
                    </div>
                  </div>
                  <div class="top-bar">
                    <div class="inner-top-bar">
                      <?php global $user; ?>
                      <div
                        class="welcome-user login-topbar hidden-xs hidden-sm hidden-md">
                        Hi <?php print user_is_anonymous() ? t('Guest!') : $user->name; ?>
                      </div>
                      <?php if (user_is_anonymous()): ?>
                        <div class="hidden-xs login-topbar">
                          <a
                            href="<?php print $base_url . '/user/login'; ?>"><span><?php print t("Login"); ?></span></a>
                        </div>
                        <div class="hidden-xs register-topbar">
                          <a
                            href="<?php print $base_url . '/user/register'; ?>"><span><?php print t("Sign Up"); ?></span></a>
                        </div>
                      <?php else : ?>

                        <div class="hidden-xs login-topbar">
                          <a
                            href="<?php print $base_url . '/user'; ?>"><span><?php print t("Profile page"); ?></span></a>
                        </div>
                        <div class="hidden-xs register-topbar">
                          <a
                            href="<?php print $base_url . '/user/edit'; ?>"><span><?php print t("Edit profile"); ?></span></a>
                        </div>

                      <?php endif; ?>
                    </div>
                  </div>
                </div>
                <div class="search-bottom visible-xs-block"></div>
              </div>
            </div>
          </div>
        </header>

      <?php elseif ($header_version == 6): ?>

        <header class="header-container header-layout-6">


          <!--Begin Header Layout 6-->
          <div id="typo-sticky-header-sticky-wrapper" class="sticky-wrapper"
               style="height: 110px;">
            <div class="header-menu" id="typo-sticky-header">
              <div class="nav-top">
                <div class="container">
                  <div class="nav-top-inner clearfix">
                    <div class="logo-home06">
                      <h1 class="logo">
                        <a href="<?php print $front_page; ?>"
                           title="<?php print $site_name; ?>">
                          <strong><?php print $site_name; ?></strong>
                          <img class="img-responsive"
                               src="<?php print $logo; ?>"
                               alt="<?php print $site_name; ?>">
                        </a>
                      </h1>
                    </div>
                    <div class="logo-sticky" style="display: none;">
                      <a href="<?php print $front_page; ?>"
                         title="<?php print $site_name; ?>">
                        <strong><?php print $site_name; ?></strong>
                        <img class="img-responsive"
                             src="<?php print $logo; ?>"
                             alt="<?php print $site_name; ?>">
                      </a>
                    </div>
                    <div class="menu-bar-btn hidden-lg">
                      <button
                        class="btn-nav cmn-toggle-switch cmn-toggle-switch__htx">
                        <span>toggle menu</span></button>
                    </div>
                    <div class="sticky-icon-group">
                      <div class="sticky-cart ">
                        <div class="typo-maincart">
                          <div class="typo-maincart">
                            <div class="typo-cart">
                              <div class="typo-icon-ajaxcart">
                                <a class="typo-cart-label"
                                   href="<?php print $base_url . '/cart' ?>">
                        <span class="icon-cart"><i
                            class="icon-handbag icons"></i></span>
<span class="print">
<span class="items"><span
    class="qty-cart"><?php print $cart_items; ?></span> <span><?php print t('item(s)'); ?></span></span>
<span>-</span> <span><span class="price"><?php print $amount; ?></span></span>
</span>
                        <span class="icon-dropdown"><i
                            class="fa fa-angle-down"></i></span>
                                </a></div>
                              <div class="ajaxcart">
                                <div class="ajax-over" id="ajaxcart-scrollbar">
                                  <div class="typo-ajax-container"><p
                                      class="no-items-in-cart"><?php print $cart_message; ?></p>
                                  </div>
                                </div>
                              </div>
                            </div>
                          </div>
                        </div>
                      </div>
                      <div class="settings">
                        <i class="icon-settings"></i>

                        <div class="settings-inner">
                          <div class="setting-content">
                            <div class="setting-language">
                              <div class="title">Select language</div>
                              <div class="language-topbar">
                                <?php if (!empty($page['language_switch'])): ?>
                                  <div class="lang-curr">
                                    <a
                                      class="title"><?php print $language_icon; ?><?php print $lang_name; ?>
                                      <i
                                        class="fa fa-angle-down"></i></a></div>
                                  <div class="lang-list">
                                    <?php print render($page['language_switch']); ?>
                                  </div>
                                <?php endif; ?>
                              </div>
                            </div>
                            <div class="setting-currency">
                              <div class="title">Select currency</div>
                              <div class="currency-topbar">
                                <?php if (!empty($page['currency'])): ?>
                                  <?php print render($page['currency']); ?>
                                <?php endif; ?>
                              </div>
                            </div>
                            <div class="setting-option">
                              <ul>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/user/login' ?>"><i
                                      class="icon-lock-open icons"></i><span><?php print t('Login / Register'); ?></span></a>
                                </li>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/user' ?>"><i
                                      class="icon-user icons"></i><span><?php print t('My Account'); ?></span></a>
                                </li>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/cart' ?>"><i
                                      class="icon-handbag icons"></i><span><?php print t('My Cart'); ?></span></a>
                                </li>
                                <li>
                                  <a
                                    href="<?php print $base_url . '/checkout' ?>"><i
                                      class="icon-note icons"></i><span><?php print t('Checkout'); ?></span></a>
                                </li>
                              </ul>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>
                    <div class="main-menu visible-lg-inline-block">
                      <div class="typo-navigation hidden-xs">
                        <div class="typo-main-menu">
                          <?php print render($page['navigation']); ?>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </header>

      <?php elseif ($header_version == 7): ?>

        <header class="header-container vheader vheader-layout-1">

          <!--Begin Header Layout Sidebar 1 (Light)-->
          <div class="sb-topbar">
            <div class="menu-bar-btn hidden-lg">
              <button class="btn-nav cmn-toggle-switch cmn-toggle-switch__htx">
                <span>toggle menu</span>
              </button>
            </div>
            <div class="sticky-icon-group">
              <div class="sticky-search">
                <i class="icon-magnifier"></i>

                <div class="quick-search">
                  <div class="form-search">
                    <?php if (!empty($page['search'])): ?>
                      <?php print render($page['search']); ?>
                    <?php endif; ?>
                  </div>
                </div>
              </div>
              <div class="sticky-cart">
                <div class="typo-maincart">
                  <div class="typo-cart">
                    <div class="typo-icon-ajaxcart">
                      <a class="typo-cart-label"
                         href="<?php print $base_url . '/cart' ?>">
                          <span class="icon-cart"><i
                              class="icon-handbag icons"></i></span>
<span class="print">
<span class="items"><span
    class="qty-cart"><?php print $cart_items; ?></span> <span><?php print t("item(s)"); ?></span></span>
<span>-</span> <span><span class="price"><?php print $amount; ?></span></span>
</span>
                          <span class="icon-dropdown"><i
                              class="fa fa-angle-down"></i></span>
                      </a></div>
                  </div>
                </div>
              </div>
              <div class="settings">
                <i class="icon-settings"></i>

                <div class="settings-inner">
                  <div class="setting-content">
                    <div class="setting-language">
                      <div class="title">Select language</div>
                      <div class="language-topbar">
                        <?php if (!empty($page['language_switch'])): ?>
                          <div class="lang-curr">
                            <a
                              class="title"><?php print $language_icon; ?><?php print $lang_name; ?>
                              <i
                                class="fa fa-angle-down"></i></a></div>
                          <div class="lang-list">
                            <?php print render($page['language_switch']); ?>
                          </div>
                        <?php endif; ?>
                      </div>
                    </div>
                    <div class="setting-currency">
                      <div class="title">Select currency</div>
                      <div class="currency-topbar">
                        <?php if (!empty($page['currency'])): ?>
                          <?php print render($page['currency']); ?>
                        <?php endif; ?>
                      </div>
                    </div>
                    <div class="setting-option">
                      <ul>
                        <li>
                          <a
                            href="<?php print $base_url . '/user/login' ?>"><i
                              class="icon-lock-open icons"></i><span><?php print t('Login / Register'); ?></span></a>
                        </li>
                        <li>
                          <a
                            href="<?php print $base_url . '/user' ?>"><i
                              class="icon-user icons"></i><span><?php print t('My Account'); ?></span></a>
                        </li>
                        <li>
                          <a
                            href="<?php print $base_url . '/cart' ?>"><i
                              class="icon-handbag icons"></i><span><?php print t('My Cart'); ?></span></a>
                        </li>
                        <li>
                          <a
                            href="<?php print $base_url . '/checkout' ?>"><i
                              class="icon-note icons"></i><span><?php print t('Checkout'); ?></span></a>
                        </li>
                      </ul>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
          <div class="header-menu sb-header-menu">
            <div class="nav-top">
              <div class="nav-top-inner clearfix">
                <div class="logo-home">
                  <h1 class="logo">
                    <a href="<?php print $front_page; ?>"
                       title="<?php print $site_name; ?>">
                      <strong><?php print $site_name; ?></strong>
                      <img class="img-responsive"
                           src="<?php print $logo; ?>"
                           alt="<?php print $site_name; ?>">
                    </a>
                  </h1>
                </div>
                <div class="logo-sticky" style="display:none;">
                  <a href="<?php print $front_page; ?>"
                     title="<?php print $site_name; ?>">
                    <strong><?php print $site_name; ?></strong>
                    <img class="img-responsive"
                         src="<?php print $logo; ?>"
                         alt="<?php print $site_name; ?>">
                  </a>
                </div>

                <div class="main-menu sb-main-menu visible-lg-inline-block">
                  <!-- navigation BOF -->

                  <div class="typo-navigation hidden-xs">
                    <div class="typo-main-menu vertical">
                      <?php print render($page['navigation']); ?>
                    </div>
                  </div>
                </div>
              </div>
            </div>

            <?php print render($page['vertical_header_content']); ?>

            <div class="sidebar-footer">
              <ul class="social-icons hide-text">
                <li class="twitter"><a
                    href="<?php print theme_get_setting('twitter_link'); ?>"
                    target="_blank"><i
                      class="fa fa-twitter"><span><?php print t("Twitter"); ?></span></i></a>
                </li>
                <li class="facebook"><a
                    href="<?php print theme_get_setting('facebook_link'); ?>"
                    target="_blank"><i
                      class="fa fa-facebook"><span><?php print t("Facebook"); ?></span></i></a>
                </li>
                <li class="gplus"><a
                    href="<?php print theme_get_setting('google_link'); ?>"
                    target="_blank"><i
                      class="fa fa-google-plus"><span><?php print t("Google plus"); ?></span></i></a>
                </li>
                <li class="instagram"><a
                    href="<?php print theme_get_setting('instagram_link'); ?>"
                    target="_blank"><i
                      class="fa fa-instagram"><span><?php print t("Instagram"); ?></span></i></a>
                </li>
                <li class="pinterest"><a
                    href="<?php print theme_get_setting('pinterest_link'); ?>"
                    target="_blank"><i
                      class="fa fa-pinterest-p"><span><?php print t("Pinterest"); ?></span></i></a>
                </li>
              </ul>
              <div class="sidebar-footer-content visible-lg">
                <?php print t("© By LOGANCEE. All Rights Reserved"); ?>
              </div>
            </div>
          </div>
        </header>

      <?php endif; ?>

      <?php if (isset($products_background)): ?>

        <div class="top-direct-wrap">
          <div class="top-direct"
               style="background-image:url(<?php print $products_background; ?>);">
            <div class="container">
              <div class="top-direct-inner">
                <div class="title"><?php print $product_title; ?></div>
                <div class="breadcrumbs">
                  <?php if (!empty($breadcrumb)): print $breadcrumb; endif; ?>
                </div>
              </div>
            </div>
          </div>
        </div>

      <?php endif; ?>

      <?php if (!empty($page['sidebar_first_sticky'])): ?>

        <div class="main-top">
          <div class="container">
            <div class="main-top-inner">
              <div class="sidebar-one-column sidebar">
                <div class="btn-close-filter">
                  <i aria-hidden="true" class="icon_close"></i>
                </div>

                <div class="block block-layered-nav">
                  <div class="block-title">
                    <strong><span>FILTER SELECTION</span></strong>
                  </div>
                  <?php print render($page['sidebar_first_sticky']); ?>
                </div>
              </div>
            </div>
          </div>
        </div>

      <?php endif; ?>

      <div class="main-container <?php print $container_class; ?>">

        <div class="row">

          <?php if (!empty($page['sidebar_first'])): ?>
            <aside class="col-sm-3 col-left sidebar" role="complementary">
              <?php print render($page['sidebar_first']); ?>
            </aside>  <!-- /#sidebar-first -->
          <?php endif; ?>

          <section<?php print $content_column_class; ?>>
            <?php if (!empty($page['highlighted'])): ?>
              <div
                class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
            <?php endif; ?>
            <a id="main-content"></a>
            <?php print render($title_prefix); ?>
            <?php if (!empty($title)): ?>
              <h1 class="page-header"><?php print $title; ?></h1>
            <?php endif; ?>
            <?php print render($title_suffix); ?>
            <?php print $messages; ?>
            <?php if (!empty($tabs)): ?>
              <?php print render($tabs); ?>
            <?php endif; ?>
            <?php if (!empty($page['help'])): ?>
              <?php print render($page['help']); ?>
            <?php endif; ?>
            <?php if (!empty($action_links)): ?>
              <ul class="action-links"><?php print render($action_links); ?></ul>
            <?php endif; ?>

            <div class="row log-reg-page">
              <div class="col-xs-12 col-sm-12 col-md-12 col-lg-12"></div>
              <div class="col-xs-12 col-sm-5 col-md-4 col-lg-4">
                <?php print render($page['content']); ?>
              </div>
              <div class="col-xs-12 col-sm-7 col-md-8 col-lg-8">
                <?php print render($register_form); ?>
              </div>
            </div>

          </section>

          <?php if (!empty($page['sidebar_second'])): ?>
            <aside class="col-sm-3 col-right sidebar" role="complementary">
              <?php print render($page['sidebar_second']); ?>
            </aside>  <!-- /#sidebar-second -->
          <?php endif; ?>

        </div>
      </div>

      <?php if (!isset($footer_style) || $footer_style == 'menus'): ?>

        <?php if (!empty($page['footer'])): ?>
          <footer class="footer-container <?php print $footer_color ?>">
            <div class="container">
              <div class="footer-inner">
                <div class="footer-top">
                  <div class="footer-top-inner clearfix">
                    <?php print render($page['footer']); ?>
                  </div>
                </div>
              </div>
            </div>
            <div id="back-top" style="display: block;">
              <a href="#top">
                <div class="sticker-wrapper">
                  <div class="sticker" title="Back to Top">
                    <i class="fa fa-angle-up"></i></div>
                </div>
              </a>
            </div>
          </footer>
        <?php endif; ?>

      <?php elseif ($footer_style == 'social'): ?>

        <footer
          class="footer-container fluid-width-footer  <?php print $footer_color ?>">
          <div class="container">
            <div class="footer-inner">
              <div class="footer-top">
                <div class="footer-top-inner clearfix">
                  <div class="widget-block">
                    <div class="block-static row">
                      <div class="block-wrap">
                        <div
                          class="col-lg-12  col-md-12  col-sm-12  col-xs-12  ">
                          <div class="home03-footer">
                            <div class="footer-logo">
                              <img class="img-responsive"
                                   src="<?php print $logo; ?>"
                                   alt="<?php print $site_name; ?>">
                            </div>
                            <ul class="social-icons h4">
                              <li class="facebook">
                                <a
                                  href="<?php print theme_get_setting('facebook_link'); ?>"
                                  target="_blank"><span><?php print t("Facebook"); ?></span>
                                </a>
                              </li>
                              <li class="twitter">
                                <a
                                  href="<?php print theme_get_setting('twitter_link'); ?>"
                                  target="_blank"><span><?php print t("Twitter"); ?></span>
                                </a>
                              </li>
                              <li class="pinterest">
                                <a
                                  href="<?php print theme_get_setting('pinterest_link'); ?>"
                                  target="_blank"><span><?php print t("Pinterest square"); ?></span>
                                </a>
                              </li>
                              <li class="gplus">
                                <a
                                  href="<?php print theme_get_setting('google_link'); ?>"
                                  target="_blank"><span><?php print t("Google +"); ?></span>
                                </a>
                              </li>
                              <li class="instagram">
                                <a
                                  href="<?php print theme_get_setting('instagram_link'); ?>"
                                  target="_blank"><span><?php print t("Instagram"); ?></span>
                                </a>
                              </li>
                            </ul>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
              <div class="footer-copyright">
                <div class="row">
                  <div
                    class="col-lg-12 col-md-12 col-sm-12 col-xs-12 text-center">
                    <?php print t("© 2015 <a href=\"//typostores.com\">Logancee</a>. All Rights
                  Reserved."); ?>
                  </div>
                </div>
              </div>
            </div>
          </div>
          <div id="back-top" style="display: block;">
            <a href="#top">
              <div class="sticker-wrapper">
                <div class="sticker" title="Back to Top">
                  <i class="fa fa-angle-up"></i></div>
              </div>
            </a>
          </div>
        </footer>

      <?php elseif ($footer_style == 'light'): ?>

        <footer class="footer-container  <?php print $footer_color ?>">
          <div class="container">
            <div class="footer-inner">
              <div class="footer-bottom">
                <div class="footer-bottom-inner clearfix">
                  <div class="widget-block "
                       id="widget-6c798f3e44c4b457cacbae0960952329">
                    <div class="block-static row">
                      <div class="block-wrap">
                        <div
                          class="col-lg-12  col-md-12  col-sm-12  col-xs-12  ">
                          <div class="row">
                            <div
                              class="fc04 col-xs-12 col-sm-6 col-md-6 col-lg-3">
                              <?php print t("<div class=\"copyright04\">© 2015 <strong><a
                                  style=\"color: #000;\"
                                  href=\"//www.typostores.com\">TypoStores</a></strong>.
                              All Rights Reserved.
                            </div>"); ?>
                            </div>
                            <div
                              class="add04 hidden-xs hidden-sm hidden-md col-xs-6 col-sm-6 col-md-6 col-lg-6">
                              <?php print t("<div class=\"address-footer\">(0123) 456 7890<span
                                class=\"space\">|</span>123 New Design St,
                              Melbourne, Australia<span class=\"space\">|</span>youremail@domain.com
                            </div>"); ?>
                            </div>
                            <div
                              class="sc04 hidden-xs col-xs-6 col-sm-6 col-md-6 col-lg-3">
                              <div class="social">
                                <ul class="social-icons small light">
                                  <li class="twitter"><a
                                      href="<?php print theme_get_setting('twitter_link'); ?>"
                                      target="_blank"><i
                                        class="fa fa-twitter"><span><?php print t("Twitter"); ?></span></i></a>
                                  </li>
                                  <li class="facebook"><a
                                      href="<?php print theme_get_setting('facebook_link'); ?>"
                                      target="_blank"><i
                                        class="fa fa-facebook"><span><?php print t("Facebook"); ?></span></i></a>
                                  </li>
                                  <li class="gplus"><a
                                      href="<?php print theme_get_setting('google_link'); ?>"
                                      target="_blank"><i
                                        class="fa fa-google-plus"><span><?php print t("Google plus"); ?></span></i></a>
                                  </li>
                                  <li class="instagram"><a
                                      href="<?php print theme_get_setting('instagram_link'); ?>"
                                      target="_blank"><i
                                        class="fa fa-instagram"><span><?php print t("Instagram"); ?></span></i></a>
                                  </li>
                                  <li class="pinterest"><a
                                      href="<?php print theme_get_setting('pinterest_link'); ?>"
                                      target="_blank"><i
                                        class="fa fa-pinterest-p"><span><?php print t("Pinterest"); ?></span></i></a>
                                  </li>
                                </ul>
                              </div>
                            </div>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
          <div id="back-top">
            <a href="#top">
              <div class="sticker-wrapper">
                <div class="sticker" title="Back to Top">
                  <i class="fa fa-angle-up"></i></div>
              </div>
            </a></div>
        </footer>

      <?php endif; ?>

    </div>
  </div>
</div>