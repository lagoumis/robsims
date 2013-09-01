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
      'value' => '<div class="small-header"><p>Amusing anecdote</p></div>
<div class="text-area"><h6>Rob attempts to introduce kids to Mahler</h6><p>Given his love of music and strong desire to educate young minds, Rob puts together a nice mixed tape and sends it off to the school where his wife works, so they can play it over the loud speakers.  The school gratefully accepts the tape and plays it over the loudspeaker to signal the end of lunch.  Later that day Rob\'s wife comes home and gives him the mixed tape back.  Turns out, Rob had put a small sample from Mahlers "piece name here" on the tape and upon hearing it a number of the schools young students were found crying by the teachers.  It seems Mahler is scary for young children.  Robs well intentioned attempt to educate was unfortunately short lived as the next day the school went back to playing "???".</p></div>',
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
<h5>Robert Sims</h5><p class="subhead">Based in Melbourne</p><img src="/profiles/robsims/themes/custom/robsims_theme/images/email-icon.png" width="44px" height="38px"/><p class="text">Preferred form of contact</p><p class="email">rob@gmail.com</p><img src="/profiles/robsims/themes/custom/robsims_theme/images/phone-icon.png" width="47px" height="38px"/><p class="text">Currently not available</p><p class="small">If you prefer to talk over the phone you can email me your number and I will call you</p></div>',
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
<h6>Eric Klay</h6><p><a href="http://www.ericklay.com/">http://www.ericklay.com/</a></p><h6>Friend one</h6><p><a href="http://www.ericklay.com/">http://www.ericklay.com/</a></p><h6>Friend two</h6><p><a href="http://www.ericklay.com/">http://www.ericklay.com/</a></p></div>',
      'format' => 'php_code',
    ),
    'additional_classes' => '',
  );
  $export['contact_friends'] = $box;

  return $export;
}
