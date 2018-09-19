<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */

function extract_unit($string, $start, $end) {
  $pos = stripos($string, $start);
  $str = substr($string, $pos);
  $str_two = substr($str, strlen($start));
  $second_pos = stripos($str_two, $end);
  $str_three = substr($str_two, 0, $second_pos);
  $unit = trim($str_three); // remove whitespaces
  return $unit;
}

?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php $count = 0; ?>
<div class="ms-left">

  <?php foreach ($rows as $id => $row): ?>
    <?php
    $id = extract_unit($row, 'id="', '-mitem"');

    if($count % 2 == 0){

      //text first
      print $row;

    }
    else {
      $node = node_load($id);
      $image = field_get_items('node',$node,'field_background_image');
      $image_url = file_create_url($image[0]['uri']);
      print  "<div class=\"ms-section\" style=\"background-image: url(" . $image_url . ");\">&nbsp;</div>";
    }

    $count++;

    ?>
  <?php endforeach; ?>

</div>

<?php $count = 0; ?>
<div class="ms-right">

  <?php foreach ($rows as $id => $row): ?>
    <?php
    $id = extract_unit($row, 'id="', '-mitem"');

    if($count % 2 == 0){

      //Image first
      $node = node_load($id);
      $image = field_get_items('node',$node,'field_background_image');
      $image_url = file_create_url($image[0]['uri']);
      print  "<div class=\"ms-section\" style=\"background-image: url(" . $image_url . ");\">&nbsp;</div>";

    }
    else {
      print $row;
    }

    $count++;

    ?>
  <?php endforeach; ?>

</div>