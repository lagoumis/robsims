<?php
/**
 * @file
 * global.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function global_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_global';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'boxes-header_box' => array(
          'module' => 'boxes',
          'delta' => 'header_box',
          'region' => 'header_first',
          'weight' => '-10',
        ),
        'boxes-header_gday_box' => array(
          'module' => 'boxes',
          'delta' => 'header_gday_box',
          'region' => 'header_first',
          'weight' => '-9',
        ),
        'boxes-copyright_box' => array(
          'module' => 'boxes',
          'delta' => 'copyright_box',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['context_global'] = $context;

  return $export;
}
