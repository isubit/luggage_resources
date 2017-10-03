<?php
/**
 * @file
 * luggage_resources.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function luggage_resources_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "multifield" && $api == "") {
    return array("version" => "");
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
function luggage_resources_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function luggage_resources_image_default_styles() {
  $styles = array();

  // Exported image style: sceenshot_medium_200.
  $styles['sceenshot_medium_200'] = array(
    'label' => 'sceenshot_medium_200',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      4 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: screenshot_thumbnail.
  $styles['screenshot_thumbnail'] = array(
    'label' => 'screenshot_thumbnail_100',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function luggage_resources_node_info() {
  $items = array(
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => t('Highlight an external resource, such as a website, and add a description.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Please search first, to make sure the resource is not already in the system.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
