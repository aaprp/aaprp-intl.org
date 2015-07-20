<?php
/**
 * @file
 * ancestors.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ancestors_taxonomy_default_vocabularies() {
  return array(
    'chapter_organizing_area' => array(
      'name' => 'Chapter/Organizing Area',
      'machine_name' => 'chapter_organizing_area',
      'description' => 'Chapter and/or Organizing Area',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
