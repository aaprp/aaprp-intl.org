<?php
/**
 * @file
 * ancestors.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ancestors_node_info() {
  $items = array(
    'ancestor_page' => array(
      'name' => t('Ancestor Page'),
      'base' => 'node_content',
      'description' => t('For all AAPRP freedom fighters who have transitioned.'),
      'has_title' => '1',
      'title_label' => t('Ancestor'),
      'help' => t('List the name of the ancestor'),
    ),
  );
  return $items;
}
