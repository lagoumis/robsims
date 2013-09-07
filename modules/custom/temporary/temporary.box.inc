<?php
/**
 * @file
 * temporary.box.inc
 */

/**
 * Implements hook_default_box().
 */
function temporary_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'happy_bday';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Happy Birthday';
  $box->options = array(
    'body' => array(
      'value' => '<img src="profiles/robsims/themes/custom/robsims_theme/images/happy-bday.png" width="700px" height="203px" />',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['happy_bday'] = $box;

  return $export;
}
