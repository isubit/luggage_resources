<?php
/**
 * @file
 * luggage_resources.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function luggage_resources_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resources';
  $handler->display->display_options['css_class'] = 'resource-wrapper';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Screenshot */
  $handler->display->display_options['fields']['field_resource_screenshot']['id'] = 'field_resource_screenshot';
  $handler->display->display_options['fields']['field_resource_screenshot']['table'] = 'field_data_field_resource_screenshot';
  $handler->display->display_options['fields']['field_resource_screenshot']['field'] = 'field_resource_screenshot';
  $handler->display->display_options['fields']['field_resource_screenshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_screenshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_resource_screenshot']['settings'] = array(
    'image_style' => 'screenshot_thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Uniform Resource Locator (URL) */
  $handler->display->display_options['fields']['field_uri']['id'] = 'field_uri';
  $handler->display->display_options['fields']['field_uri']['table'] = 'field_data_field_uri';
  $handler->display->display_options['fields']['field_uri']['field'] = 'field_uri';
  $handler->display->display_options['fields']['field_uri']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_uri']['type'] = 'link_separate';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_tags']['id'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['table'] = 'field_data_field_tags';
  $handler->display->display_options['fields']['field_tags']['field'] = 'field_tags';
  $handler->display->display_options['fields']['field_tags']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'resource' => 'resource',
  );

  /* Display: Resources */
  $handler = $view->new_display('page', 'Resources', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'resources';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Resources';
  $handler->display->display_options['menu']['weight'] = '-5';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Resource Grid */
  $handler = $view->new_display('page', 'Resource Grid', 'resource_grid');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'clearfix';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Uniform Resource Locator (URL) */
  $handler->display->display_options['fields']['field_uri']['id'] = 'field_uri';
  $handler->display->display_options['fields']['field_uri']['table'] = 'field_data_field_uri';
  $handler->display->display_options['fields']['field_uri']['field'] = 'field_uri';
  $handler->display->display_options['fields']['field_uri']['label'] = '';
  $handler->display->display_options['fields']['field_uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_uri']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uri']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_uri']['type'] = 'link_absolute';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_uri]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Uniform Resource Locator (URL) */
  $handler->display->display_options['fields']['field_uri_1']['id'] = 'field_uri_1';
  $handler->display->display_options['fields']['field_uri_1']['table'] = 'field_data_field_uri';
  $handler->display->display_options['fields']['field_uri_1']['field'] = 'field_uri';
  $handler->display->display_options['fields']['field_uri_1']['label'] = '';
  $handler->display->display_options['fields']['field_uri_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_uri_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_uri_1']['type'] = 'link_url';
  /* Field: Content: Screenshot */
  $handler->display->display_options['fields']['field_resource_screenshot']['id'] = 'field_resource_screenshot';
  $handler->display->display_options['fields']['field_resource_screenshot']['table'] = 'field_data_field_resource_screenshot';
  $handler->display->display_options['fields']['field_resource_screenshot']['field'] = 'field_resource_screenshot';
  $handler->display->display_options['fields']['field_resource_screenshot']['label'] = '';
  $handler->display->display_options['fields']['field_resource_screenshot']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_resource_screenshot']['alter']['path'] = '[field_uri]';
  $handler->display->display_options['fields']['field_resource_screenshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_screenshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_resource_screenshot']['settings'] = array(
    'image_style' => 'screenshot_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Resource Description */
  $handler->display->display_options['fields']['field_resource_description']['id'] = 'field_resource_description';
  $handler->display->display_options['fields']['field_resource_description']['table'] = 'field_data_field_resource_description';
  $handler->display->display_options['fields']['field_resource_description']['field'] = 'field_resource_description';
  $handler->display->display_options['fields']['field_resource_description']['label'] = '';
  $handler->display->display_options['fields']['field_resource_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_resource_description']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['path'] = 'resources';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Resources';
  $handler->display->display_options['menu']['weight'] = '-5';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['resources'] = $view;

  return $export;
}
