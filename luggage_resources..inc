<?php
/**
 * @file
 * luggage_resources..inc
 */

/**
 * Implements hook_multifield_default_multifield().
 */
function luggage_resources_multifield_default_multifield() {
  $export = array();

  $multifield = new stdClass();
  $multifield->disabled = FALSE; /* Edit this to true to make a default multifield disabled initially */
  $multifield->machine_name = 'head_meta';
  $multifield->label = 'head meta';
  $multifield->description = '';
  $export['head_meta'] = $multifield;

  return $export;
}
