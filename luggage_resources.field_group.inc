<?php
/**
 * @file
 * luggage_resources.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function luggage_resources_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_http_request|node|resource|default';
  $field_group->group_name = 'group_http_request';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_raw';
  $field_group->data = array(
    'label' => 'HTTP Request',
    'weight' => '5',
    'children' => array(
      0 => 'field_resource_request_code',
      1 => 'field_resource_request_error',
      2 => 'field_resource_request_inferred_',
      3 => 'field_resource_request_recode',
      4 => 'field_resource_request_reurl',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'HTTP Request',
      'instance_settings' => array(
        'classes' => 'group-http-request field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_http_request|node|resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_http_request|node|resource|form';
  $field_group->group_name = 'group_http_request';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_raw';
  $field_group->data = array(
    'label' => 'HTTP Request',
    'weight' => '11',
    'children' => array(
      0 => 'field_resource_request_code',
      1 => 'field_resource_request_error',
      2 => 'field_resource_request_inferred_',
      3 => 'field_resource_request_recode',
      4 => 'field_resource_request_reurl',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'HTTP Request',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-http-request field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_http_request|node|resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_http_request|node|resource|full';
  $field_group->group_name = 'group_http_request';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_raw';
  $field_group->data = array(
    'label' => 'HTTP Request',
    'weight' => '11',
    'children' => array(
      0 => 'field_resource_request_code',
      1 => 'field_resource_request_error',
      2 => 'field_resource_request_inferred_',
      3 => 'field_resource_request_recode',
      4 => 'field_resource_request_reurl',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'HTTP Request',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-http-request field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_http_request|node|resource|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_http_request|node|resource|search_index';
  $field_group->group_name = 'group_http_request';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'search_index';
  $field_group->parent_name = 'group_raw';
  $field_group->data = array(
    'label' => 'HTTP Request',
    'weight' => '11',
    'children' => array(
      0 => 'field_resource_request_error',
      1 => 'field_resource_request_code',
      2 => 'field_resource_request_recode',
      3 => 'field_resource_request_reurl',
      4 => 'field_resource_request_inferred_',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'HTTP Request',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-http-request field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_http_request|node|resource|search_index'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_tags|node|resource|default';
  $field_group->group_name = 'group_meta_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_raw';
  $field_group->data = array(
    'label' => 'Meta Tags',
    'weight' => '6',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta-tags field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_meta_tags|node|resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_tags|node|resource|form';
  $field_group->group_name = 'group_meta_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_raw';
  $field_group->data = array(
    'label' => 'Meta Tags',
    'weight' => '12',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Meta Tags',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-meta-tags field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_meta_tags|node|resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_tags|node|resource|full';
  $field_group->group_name = 'group_meta_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_raw';
  $field_group->data = array(
    'label' => 'Meta Tags',
    'weight' => '12',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'Meta Tags',
      'instance_settings' => array(
        'classes' => 'group-meta-tags field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_meta_tags|node|resource|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meta_tags|node|resource|search_index';
  $field_group->group_name = 'group_meta_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'search_index';
  $field_group->parent_name = 'group_raw';
  $field_group->data = array(
    'label' => 'Meta Tags',
    'weight' => '12',
    'children' => array(
      0 => 'field_resource_meta',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-meta-tags field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_meta_tags|node|resource|search_index'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_raw|node|resource|default';
  $field_group->group_name = 'group_raw';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Retrieved Raw Metadata',
    'weight' => '4',
    'children' => array(
      0 => 'field_resource_meta_keywords',
      1 => 'field_resource_raw_description',
      2 => 'field_resource_raw_title',
      3 => 'field_resource_screenshot',
      4 => 'group_http_request',
      5 => 'group_meta_tags',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'Retrieved Raw Metadata',
      'instance_settings' => array(
        'classes' => 'group-raw field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_raw|node|resource|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_raw|node|resource|form';
  $field_group->group_name = 'group_raw';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Retrieved Raw Metadata',
    'weight' => '7',
    'children' => array(
      0 => 'field_resource_meta_keywords',
      1 => 'field_resource_raw_description',
      2 => 'field_resource_raw_title',
      3 => 'group_http_request',
      4 => 'group_meta_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Retrieved Raw Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-raw field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_raw|node|resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_raw|node|resource|full';
  $field_group->group_name = 'group_raw';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Retrieved Raw Metadata',
    'weight' => '8',
    'children' => array(
      0 => 'field_resource_meta_keywords',
      1 => 'field_resource_raw_description',
      2 => 'field_resource_raw_title',
      3 => 'group_http_request',
      4 => 'group_meta_tags',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'label' => 'Retrieved Raw Metadata',
      'instance_settings' => array(
        'classes' => 'group-raw field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_raw|node|resource|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_raw|node|resource|search_index';
  $field_group->group_name = 'group_raw';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'search_index';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Retrieved Raw Metadata',
    'weight' => '5',
    'children' => array(
      0 => 'field_resource_raw_title',
      1 => 'field_resource_meta_keywords',
      2 => 'field_resource_raw_description',
      3 => 'field_resource_screenshot',
      4 => 'group_http_request',
      5 => 'group_meta_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Retrieved Raw Metadata',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-raw field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_raw|node|resource|search_index'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('HTTP Request');
  t('Meta Tags');
  t('Retrieved Raw Metadata');

  return $field_groups;
}
