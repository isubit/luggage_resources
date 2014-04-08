<?php
/**
 * @file
 * luggage_resources.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function resources_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "multifield" && $api == "multifield") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function resources_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function resources_node_info() {
  $items = array(
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => t('A URI of crop knowledge'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Please search first, to make sure the resource is not already in the system.'),
    ),
  );
  return $items;
}
