<?php
/**
 * @file
 * luggage_resources.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_resources_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create resource content'.
  $permissions['create resource content'] = array(
    'name' => 'create resource content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any resource content'.
  $permissions['delete any resource content'] = array(
    'name' => 'delete any resource content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own resource content'.
  $permissions['delete own resource content'] = array(
    'name' => 'delete own resource content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in meta_keywords'.
  $permissions['delete terms in meta_keywords'] = array(
    'name' => 'delete terms in meta_keywords',
    'roles' => array(
      'taxonomy editor' => 'taxonomy editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any resource content'.
  $permissions['edit any resource content'] = array(
    'name' => 'edit any resource content',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own resource content'.
  $permissions['edit own resource content'] = array(
    'name' => 'edit own resource content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in meta_keywords'.
  $permissions['edit terms in meta_keywords'] = array(
    'name' => 'edit terms in meta_keywords',
    'roles' => array(
      'taxonomy editor' => 'taxonomy editor',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
