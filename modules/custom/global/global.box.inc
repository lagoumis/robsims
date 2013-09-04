<?php
/**
 * @file
 * global.box.inc
 */

/**
 * Implements hook_default_box().
 */
function global_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'copyright_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Copyright box';
  $box->options = array(
    'body' => array(
      'value' => '<span class="symbol">©</span><span class="text">Copyright Rob Sims 2013</span>',
      'format' => 'php_code',
    ),
  );
  $export['copyright_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'header_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Home header box';
  $box->options = array(
    'body' => array(
      'value' => '<img src="/profiles/robsims/themes/custom/robsims_theme/images/banner.png" width="960px" height="290px"/>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['header_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'header_gday_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Header Gday box';
  $box->options = array(
    'body' => array(
      'value' => '<div class="header-message"><h2>G\'Day</h2><p class="text">Welcome to my website.  My name is Rob Sims and I write music.  This site contains all my finished pieces for you peruse and purchase. Please enjoy and drop me line if you feel like saying hello. </p><p class="signature">Rob</p>
</div>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['header_gday_box'] = $box;

  return $export;
}
