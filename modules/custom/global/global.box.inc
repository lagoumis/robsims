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
  $box->delta = 'header_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Home header box';
  $box->options = array(
    'body' => array(
      'value' => '<img src="/profiles/robsims/themes/custom/robsims_theme/images/banner.png" width="940px" height="290px"/>
<div class="header-message"><h2>G\'Day</h2><p class="text">Welcome to my website, this is a  message that explains  something about the website point. Sed posuere consectetur est at lobortis. Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor.</p><p class="signature">Rob</p>
</div>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['header_box'] = $box;

  return $export;
}
