<?php
/**
 * @file
 * layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_about';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/1' => 'node/1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-about_headshot' => array(
          'module' => 'boxes',
          'delta' => 'about_headshot',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'boxes-about_anecdote' => array(
          'module' => 'boxes',
          'delta' => 'about_anecdote',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['context_about'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_contact';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/2' => 'node/2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'webform-client-block-3' => array(
          'module' => 'webform',
          'delta' => 'client-block-3',
          'region' => 'content',
          'weight' => '10',
        ),
        'boxes-contact_details_box' => array(
          'module' => 'boxes',
          'delta' => 'contact_details_box',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'boxes-contact_friends' => array(
          'module' => 'boxes',
          'delta' => 'contact_friends',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['context_contact'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_home';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/5' => 'node/5',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-home_bio_box' => array(
          'module' => 'boxes',
          'delta' => 'home_bio_box',
          'region' => 'content',
          'weight' => '-10',
        ),
        'boxes-happy_bday' => array(
          'module' => 'boxes',
          'delta' => 'happy_bday',
          'region' => 'content',
          'weight' => '-9',
        ),
        'webform-client-block-4' => array(
          'module' => 'webform',
          'delta' => 'client-block-4',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['context_home'] = $context;

  return $export;
}
