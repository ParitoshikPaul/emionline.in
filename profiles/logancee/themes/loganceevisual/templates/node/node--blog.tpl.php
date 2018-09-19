<?php
/**
 * @file
 * Default theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 *
 * @ingroup templates
 */
global $base_url;
$path = $base_url . '/' . drupal_get_path_alias("node/" . $node->nid);
?>

<div id="messages_product_view">

</div>
<div class="postWrapper post-detail-wrap">
  <?php print render($content['field_blog_image']); ?>

  <div class="title-blog">
    <h2>
      <?php print $title; ?>
    </h2>
  </div>
  <div class="postDetails">
    <span>By <?php print $name; ?></span>
    <label class="spac-post">|</label> <span class="created-post"><?php print $date; ?></span>
    <label class="spac-post">|</label>
    <span>
      <a
        href="<?php print $node_url; ?>#commentBox">
        <?php print t("Comments"); ?></a>
    </span>
  </div>
  <div class="postContent">
    <?php print render($content['body']); ?>
  </div>
  <div class="social-share">
    <div class="title"><?php print t("Share:"); ?></div>
    <ul class="social-listing">
      <li class="facebook">
        <a data-toggle="tooltip" data-placement="top"
           class="trasition-all"
           title="<?php print t("Share on Facebook") ?>"
           href="javascript:void(0)"
           target="_blank" rel="nofollow"
           onclick="window.open('//www.facebook.com/sharer/sharer.php?u='+'<?php print $path; ?>');return false;"><i
            class="fa fa-facebook"></i>
        </a></li>
      <li class="twitter">
        <a data-toggle="tooltip" data-placement="top"
           class="trasition-all" href="javascript:void(0)"
           title="<?php print t("Share on Twitter") ?>"
           rel="nofollow" target="_blank"
           onclick="window.open('//twitter.com/share?text=<?php print htmlentities($title); ?>&amp;url=<?php print $path; ?>');return false;"><i
            class="fa fa-twitter"></i>
        </a></li>
      <li class="linkedin">
        <a data-toggle="tooltip" data-placement="top"
           class="trasition-all" href="javascript:void(0)"
           title="<?php print t("Share on LinkedIn") ?>"
           rel="nofollow" target="_blank"
           onclick="window.open('//www.linkedin.com/shareArticle?mini=true&amp;url=<?php print $path; ?>?title=<?php print htmlentities($title); ?>');return false;"><i
            class="fa fa-linkedin"></i>
        </a></li>
      <li class="tumblr">
        <a data-toggle="tooltip" data-placement="top"
           class="trasition-all" href="javascript:void(0)"
           title="<?php print t("Share on Tumblr") ?>"
           rel="nofollow" target="_blank"
           onclick="window.open('//www.tumblr.com/share/link?url=<?php print $path; ?>?name=<?php print htmlentities($title); ?>');return false;"><i
            class="fa fa-tumblr"></i>
        </a></li>
      <li class="google-plus">
        <a data-toggle="tooltip" data-placement="top"
           class="trasition-all" href="javascript:void(0)"
           title="<?php print t("Share on Google Plus") ?>"
           rel="nofollow"
           target="_blank"
           onclick="window.open('//plus.google.com/share?url=<?php print $path; ?>');return false;"><i
            class="fa fa-google-plus"></i>
        </a></li>
      <li class="pinterest">
        <a data-toggle="tooltip" data-placement="top"
           class="trasition-all" href="javascript:void(0)"
           title="<?php print t("Pin this") ?>"
           rel="nofollow" target="_blank"
           onclick="window.open('//pinterest.com/pin/create/button/?url=<?php print $path; ?>?media=http%3A%2F%2Fdemo.cactusthemes.com%2Fnewstube%2Fwp-content%2Fuploads%2F2015%2F06%2F014-Surf-woman.jpg&amp;description=<?php print htmlentities($title); ?>');return false;"><i
            class="fa fa-pinterest"></i>
        </a></li>
      <li class="email">
        <a data-toggle="tooltip" data-placement="top"
           class="trasition-all" href="javascript:void(0)"
           target="_blank"
           onclick="window.open('//mail.google.com/mail/u/0/?view=cm&amp;fs=1&amp;to&amp;su=<?php print htmlentities($title); ?>&amp;body=<?php print $path; ?>?ui=2&amp;tf=1');return false;"
           title="<?php print t("Gmail") ?>"><i
            class="fa fa-envelope"></i>
        </a></li>
    </ul>
  </div>
  <div class="tags">
    <span><?php print t("Tags:"); ?></span>
    <?php print render($content['field_category']); ?>
  </div>
</div>
<div class="post-form-title">
  <a href="#commentBox" id="commentBox"></a>
  <h2><?php print t("Post Comments"); ?></h2>
</div>
<form id="postComment" method="post">
  <fieldset class="group-select">
    <ul class="form-list">
      <li>
        <div class="row">
          <div class="col-xs-12 col-sm-6 col-md-6 col-lg-6">
            <div class="input-box input-comm">
              <label for="user" class="required">Name<em>*</em></label>
              <input name="user" id="user" value="" title="Name"
                     class="required-entry input-text" type="text"></div>
          </div>
          <div class="col-xs-12 col-sm-6 col-md-6 col-lg-6">
            <div class="input-box input-comm">
              <label for="email" class="required">Email<em>*</em></label>
              <input name="email" id="email" value="" title="Email"
                     class="required-entry input-text validate-email"
                     type="text"></div>
          </div>
        </div>
        <div class="input-box aw-blog-comment-area">
          <label for="comment" class="required">Your
            Commment<em>*</em></label><textarea name="comment" id="comment"
                                                title="Your Commment"
                                                class="required-entry input-text"
                                                cols="50" rows="5"></textarea>
        </div>
      </li>
    </ul>
  </fieldset>
  <div class="button-set">
    <input name="post_id" type="hidden" value="1">

    <p class="required">* Required Fields</p>
    <button class="button form-button" type="submit">
      <span><span>Submit Comment</span></span></button>
  </div>
</form>