<?php
/**
 * @file
 * basic_page.box.inc
 */

/**
 * Implements hook_default_box().
 */
function basic_page_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'about_anecdote';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'About anecdote ';
  $box->options = array(
    'body' => array(
      'value' => '<div class="small-header"><p>Fun facts</p></div>
<div class="text-area"><h6>Rob general knowledge</h6><p>Avid supporter of Western bulldogs (despite knowing better)</p><p>I HATE yoghurt and bagpipes</p><p>Everyone has a price. Mine is a bucket of chips and a cold beer</p><p>I played the trumpet professionally, but secretly I wished that I had picked the violin.  Its way better :P</p></div>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['about_anecdote'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'about_headshot';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'About headshot box';
  $box->options = array(
    'body' => array(
      'value' => '<img  src="/profiles/robsims/themes/custom/robsims_theme/images/headshot.png" width="220px" height="220px"/><p class="quote">Music expresses that which cannot be said and on which it is impossible to be silent.</p><p><em>Victor Hugo</em></p>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['about_headshot'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'contact_details_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Contact details box';
  $box->options = array(
    'body' => array(
      'value' => '<div class="small-header"><p>Contact details</p></div>
<div class="text-area">
<h5>Robert Sims</h5><p class="subhead">Based in Melbourne</p><img src="/profiles/robsims/themes/custom/robsims_theme/images/email-icon.png" width="44px" height="38px"/><p class="text">Preferred form of contact</p><p class="email"><a href="mailto:rob@gmail.com">rob@gmail.com</a></p><img src="/profiles/robsims/themes/custom/robsims_theme/images/phone-icon.png" width="47px" height="38px"/><p class="text">Currently not available</p><p class="small">**If you prefer to talk over the phone you can email me your number and I will call you</p></div>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['contact_details_box'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'contact_friends';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Friends of rob';
  $box->options = array(
    'body' => array(
      'value' => '<div class="small-header"><p>Friends of Rob</p></div>
<div class="text-area">
<h6><a href="http://www.ericklay.com/">Eric Klay</a></h6><p>Musician (trumpet player)</p><h6><a href="http://www.move.com.au/artist/anthony-pope">Anthony Pope</a></h6><p>Musician (trumpet player)</p><h6><a href="http://www.mso.com.au/">MSO</a></h6><p>Melbourne symphony orchestra</p></div>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['contact_friends'] = $box;

  return $export;
}
