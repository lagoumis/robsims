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

  return $export;
}
