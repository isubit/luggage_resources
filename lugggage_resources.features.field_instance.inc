<?php
/**
 * @file
 * lugggage_resources.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function lugggage_resources_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-resource-body'
  $field_instances['node-resource-body'] = array(
    'bundle' => 'resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-resource-field_category'
  $field_instances['node-resource-field_category'] = array(
    'bundle' => 'resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy_to_apachesolr_link',
        'settings' => array(
          'path' => array(
            'search_path' => 'http://preview.ent.iastate.edu/search/content',
          ),
          'target' => '_self',
        ),
        'type' => 'taxonomy_to_apachesolr_link',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy_to_apachesolr_link',
        'settings' => array(
          'path' => array(
            'search_path' => 'http://preview.ent.iastate.edu/search/content',
          ),
          'target' => '_self',
        ),
        'type' => 'taxonomy_to_apachesolr_link',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'taxonomy_to_apachesolr_link',
        'settings' => array(
          'path' => array(
            'search_path' => 'http://preview.ent.iastate.edu/search/content',
          ),
          'target' => '_self',
        ),
        'type' => 'taxonomy_to_apachesolr_link',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy_to_apachesolr_link',
        'settings' => array(
          'path' => array(
            'search_path' => 'http://preview.ent.iastate.edu/search/content',
          ),
          'target' => '_self',
        ),
        'type' => 'taxonomy_to_apachesolr_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_category',
    'label' => 'Category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-resource-field_resource_url'
  $field_instances['node-resource-field_resource_url'] = array(
    'bundle' => 'resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'complete URL - http://www.example.com',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_resource_url',
    'label' => 'URL',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-resource-field_tags'
  $field_instances['node-resource-field_tags'] = array(
    'bundle' => 'resource',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy_to_apachesolr_link',
        'settings' => array(
          'path' => array(
            'search_path' => 'http://preview.ent.iastate.edu/search/content',
          ),
          'target' => '_self',
        ),
        'type' => 'taxonomy_to_apachesolr_link',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy_to_apachesolr_link',
        'settings' => array(
          'path' => array(
            'search_path' => 'http://preview.ent.iastate.edu/search/content',
          ),
          'target' => '_self',
        ),
        'type' => 'taxonomy_to_apachesolr_link',
        'weight' => 2,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'taxonomy_to_apachesolr_link',
        'settings' => array(
          'path' => array(
            'search_path' => 'http://preview.ent.iastate.edu/search/content',
          ),
          'target' => '_self',
        ),
        'type' => 'taxonomy_to_apachesolr_link',
        'weight' => 2,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'taxonomy_to_apachesolr_link',
        'settings' => array(
          'path' => array(
            'search_path' => 'http://preview.ent.iastate.edu/search/content',
          ),
          'target' => '_self',
        ),
        'type' => 'taxonomy_to_apachesolr_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Category');
  t('Description');
  t('Tags');
  t('URL');
  t('complete URL - http://www.example.com');

  return $field_instances;
}
