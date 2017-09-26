<?php
/**
 * @file
 * luggage_resources.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function luggage_resources_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:resource.
  $config['node:resource'] = array(
    'instance' => 'node:resource',
    'config' => array(
      'description' => array(
        'value' => '[node:field-resource-description]',
      ),
    ),
  );

  return $config;
}
