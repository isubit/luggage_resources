<?php
/**
 * @file
 * luggage_resources.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function luggage_resources_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_my-resources:my-luggage_resources
  $menu_links['main-menu_my-resources:my-luggage_resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'my-luggage_resources',
    'router_path' => 'my-luggage_resources',
    'link_title' => 'My Resources',
    'options' => array(
      'identifier' => 'main-menu_my-resources:my-luggage_resources',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('My Resources');


  return $menu_links;
}
