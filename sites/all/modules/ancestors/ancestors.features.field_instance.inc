<?php
/**
 * @file
 * ancestors.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ancestors_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ancestor_page-body'
  $field_instances['node-ancestor_page-body'] = array(
    'bundle' => 'ancestor_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please describe this ancestor\'s early years and political work with the AAPRP.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
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
    'label' => 'Biography',
    'required' => 1,
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-ancestor_page-field_ancestors_pagetopbox'
  $field_instances['node-ancestor_page-field_ancestors_pagetopbox'] = array(
    'bundle' => 'ancestor_page',
    'default_value' => array(
      0 => array(
        'value' => '<center><b>TEXT BOX GIVING AN OVERVIEW OF THE BACKGROUND AND PURPOSE OF THIS PAGE.  ACTUAL TEXT TO BE PROVIDED LATER.  </b></center>',
      ),
    ),
    'deleted' => 0,
    'description' => '<b>IMPORTANT: Do not enter anything here unless you know that you need to.</b> The text in this box gives an overview of the background and purpose of the Ancestors age. It will appear at the top of the Ancestors Page i.e above the grid showing all the ancestors. This needs to be put in only one time.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ancestors_pagetopbox',
    'label' => 'Page Top Box',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-ancestor_page-field_birth'
  $field_instances['node-ancestor_page-field_birth'] = array(
    'bundle' => 'ancestor_page',
    'deleted' => 0,
    'description' => 'List the date of birth',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
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
    'field_name' => 'field_birth',
    'label' => 'Birth',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'custom',
        'input_format_custom' => 'm-d-Y',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-ancestor_page-field_chapter_organizing_area'
  $field_instances['node-ancestor_page-field_chapter_organizing_area'] = array(
    'bundle' => 'ancestor_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a comma separated list of the ancestor\'s chapter and/or organizing area affiliations. Note that to avoid duplication, if an appropriate affiliation already exists just select it from the list that appears once you start typing.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_chapter_organizing_area',
    'label' => 'Chapter/Organizing Area',
    'required' => 0,
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-ancestor_page-field_image'
  $field_instances['node-ancestor_page-field_image'] = array(
    'bundle' => 'ancestor_page',
    'deleted' => 0,
    'description' => 'Please upload an image if available',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'file',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Featured Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'ancestors-images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '10x10',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-ancestor_page-field_place_of_birth'
  $field_instances['node-ancestor_page-field_place_of_birth'] = array(
    'bundle' => 'ancestor_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_place_of_birth',
    'label' => 'Place of birth',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-ancestor_page-field_position'
  $field_instances['node-ancestor_page-field_position'] = array(
    'bundle' => 'ancestor_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List the last office/position held and Union membership as Central Committee Member or AAWRU Central Committee or Political Education Committee or Chapter Coordinating Council, Ghana Chapter',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_position',
    'label' => 'Position',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-ancestor_page-field_transition'
  $field_instances['node-ancestor_page-field_transition'] = array(
    'bundle' => 'ancestor_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
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
    'field_name' => 'field_transition',
    'label' => 'Died',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'custom',
        'input_format_custom' => 'm-d-Y',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<b>IMPORTANT: Do not enter anything here unless you know that you need to.</b> The text in this box gives an overview of the background and purpose of the Ancestors age. It will appear at the top of the Ancestors Page i.e above the grid showing all the ancestors. This needs to be put in only one time.');
  t('Biography');
  t('Birth');
  t('Chapter/Organizing Area');
  t('Died');
  t('Enter a comma separated list of the ancestor\'s chapter and/or organizing area affiliations. Note that to avoid duplication, if an appropriate affiliation already exists just select it from the list that appears once you start typing.');
  t('Featured Image');
  t('List the date of birth');
  t('List the last office/position held and Union membership as Central Committee Member or AAWRU Central Committee or Political Education Committee or Chapter Coordinating Council, Ghana Chapter');
  t('Page Top Box');
  t('Place of birth');
  t('Please describe this ancestor\'s early years and political work with the AAPRP.');
  t('Please upload an image if available');
  t('Position');

  return $field_instances;
}
