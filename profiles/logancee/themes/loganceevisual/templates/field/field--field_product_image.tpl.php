<?php

/**
 * @file field.tpl.php
 * Default template implementation to display the value of a field.
 *
 * This file is not used and is here as a starting point for customization only.
 * @see theme_field()
 *
 * Available variables:
 * - $items: An array of field values. Use render() to output them.
 * - $label: The item label.
 * - $label_hidden: Whether the label display is set to 'hidden'.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - field: The current template type, i.e., "theming hook".
 *   - field-name-[field_name]: The current field name. For example, if the
 *     field name is "field_description" it would result in
 *     "field-name-field-description".
 *   - field-type-[field_type]: The current field type. For example, if the
 *     field type is "text" it would result in "field-type-text".
 *   - field-label-[label_display]: The current label position. For example, if
 *     the label position is "above" it would result in "field-label-above".
 *
 * Other variables:
 * - $element['#object']: The entity to which the field is attached.
 * - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
 * - $element['#field_name']: The field name.
 * - $element['#field_type']: The field type.
 * - $element['#field_language']: The field language.
 * - $element['#field_translatable']: Whether the field is translatable or not.
 * - $element['#label_display']: Position of label display, inline, above, or
 *   hidden.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_field()
 * @see theme_field()
 *
 * @ingroup themeable
 */
$zoom_type = "";
if ($node = menu_get_object()) {
  // Get the nid
  $nid = $node->nid;
  $zoom_type = field_get_items('node',$node,'field_zoom_type');
  if(isset($zoom_type[0]['value'])){
    $zoom_type = $zoom_type[0]['value'];
  }
  else {
    $zoom_type = 'round';
  }
}

?>
<div class="product-image-wrap">

  <div class="product-image product-image-zoom" data-zoom-type="<?php print $zoom_type; ?>">
    <div class="product-image-gallery">

      <?php foreach ($items as $key => $item): ?>

        <?php
          $image_url = file_create_url($item['#item']['uri']);
        ?>

        <a id="image-<?php print $key; ?>"
           href="<?php print $image_url; ?>"
           data-zoom-image="<?php print $image_url; ?>"
           class="gallery-image visible">
          <img class="img-responsive"
               src="<?php print $image_url; ?>"
               alt="Image" itemprop="image">
        </a>
      <?php endforeach; ?>
    </div>
  </div>
  <div class="more-views">
    <div id="gallery_01"
         class="product-image-thumbs owl-carousel owl-theme">

      <?php foreach ($items as $key => $item): ?>

        <?php
        $image_thumb = image_style_url('product_thumb', $item['#item']['uri']);
        ?>
        <div class="thumb-item">
          <a class="thumb-link" href="#" title=""
             data-image-index="<?php print $key; ?>">
            <img class="img-responsive"
                 src="<?php print $image_thumb; ?>"
                 alt="">
          </a>
        </div>

      <?php endforeach; ?>

    </div>
  </div>
</div>
