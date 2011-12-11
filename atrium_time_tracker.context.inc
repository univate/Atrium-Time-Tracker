<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_time_tracker_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'time_sheet';
  $context->description = '';
  $context->tag = 'time_tracker';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*time_sheet*' => '*time_sheet*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'time_tracker_timer-your_active_timers' => array(
          'module' => 'time_tracker_timer',
          'delta' => 'your_active_timers',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
      'layout' => 'default',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('time_tracker');
  $export['time_sheet'] = $context;

  return $export;
}
