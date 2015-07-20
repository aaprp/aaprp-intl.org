<?php
/**
 * @file
 * views_galleriffic_gallery.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function views_galleriffic_gallery_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'galleriffic_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Galleriffic Gallery';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_galleriffic';
  $handler->display->display_options['style_options']['pager_top'] = 'true';
  $handler->display->display_options['style_options']['renderss'] = '';
  $handler->display->display_options['style_options']['rendernav'] = '';
  $handler->display->display_options['style_options']['sync'] = 'true';
  $handler->display->display_options['style_options']['keyboard'] = 'true';
  $handler->display->display_options['row_plugin'] = 'gallerifficfields';
  $handler->display->display_options['row_options']['slide_field'] = 'field_gallery_image_1';
  $handler->display->display_options['row_options']['thumbnail_field'] = 'field_gallery_image';
  $handler->display->display_options['row_options']['title_field'] = 'title';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = 'Image Thumbnail';
  $handler->display->display_options['fields']['field_gallery_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'image_style' => 'galleriffic_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_gallery_image_1']['id'] = 'field_gallery_image_1';
  $handler->display->display_options['fields']['field_gallery_image_1']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_1']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_1']['label'] = 'Image Slide';
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image_1']['settings'] = array(
    'image_style' => 'galleriffic_slide',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image_1']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_gallery_image_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image_1']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_gallery_image_2']['id'] = 'field_gallery_image_2';
  $handler->display->display_options['fields']['field_gallery_image_2']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_2']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_2']['label'] = 'Image Description';
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['text'] = '[field_gallery_image_2-alt] ';
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image_2']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image_2']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image_2']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_gallery_image_3']['id'] = 'field_gallery_image_3';
  $handler->display->display_options['fields']['field_gallery_image_3']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_3']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_3']['label'] = 'Image Title';
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['text'] = '[field_gallery_image_3-title] ';
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image_3']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image_3']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image_3']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery' => 'gallery',
  );

  /* Display: Entity content */
  $handler = $view->new_display('entity_view', 'Entity content', 'entity_view_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_galleriffic';
  $handler->display->display_options['style_options']['pager_top'] = 'true';
  $handler->display->display_options['style_options']['renderss'] = '';
  $handler->display->display_options['style_options']['rendernav'] = '';
  $handler->display->display_options['style_options']['sync'] = 'true';
  $handler->display->display_options['style_options']['keyboard'] = 'true';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'gallerifficfields';
  $handler->display->display_options['row_options']['slide_field'] = 'field_gallery_image_1';
  $handler->display->display_options['row_options']['thumbnail_field'] = 'field_gallery_image';
  $handler->display->display_options['row_options']['title_field'] = 'field_gallery_image_3';
  $handler->display->display_options['row_options']['description_field'] = 'field_gallery_image_2';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = 'Image Thumbnail';
  $handler->display->display_options['fields']['field_gallery_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'image_style' => 'galleriffic_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_gallery_image_1']['id'] = 'field_gallery_image_1';
  $handler->display->display_options['fields']['field_gallery_image_1']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_1']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_1']['label'] = 'Image Slide';
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image_1']['settings'] = array(
    'image_style' => 'galleriffic_slide',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image_1']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_gallery_image_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image_1']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_gallery_image_2']['id'] = 'field_gallery_image_2';
  $handler->display->display_options['fields']['field_gallery_image_2']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_2']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_2']['label'] = 'Image Description';
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['text'] = '[field_gallery_image_2-alt] ';
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image_2']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image_2']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image_2']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_2']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_gallery_image_3']['id'] = 'field_gallery_image_3';
  $handler->display->display_options['fields']['field_gallery_image_3']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_3']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_3']['label'] = 'Image Title';
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['text'] = '[field_gallery_image_3-title] ';
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image_3']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image_3']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image_3']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_3']['field_api_classes'] = 0;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'gallery',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = 'Image Thumbnail';
  $handler->display->display_options['fields']['field_gallery_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'image_style' => 'galleriffic_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_gallery_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_gallery_image']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_gallery_image_1']['id'] = 'field_gallery_image_1';
  $handler->display->display_options['fields']['field_gallery_image_1']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_1']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image_1']['label'] = 'Image Slide';
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image_1']['settings'] = array(
    'image_style' => 'galleriffic_slide',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image_1']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_gallery_image_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_gallery_image_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image_1']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_gallery_image_1']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'galleries';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Galleries';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['galleriffic_gallery'] = $view;

  return $export;
}
