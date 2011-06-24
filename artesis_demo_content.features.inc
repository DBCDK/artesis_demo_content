<?php
/**
 * @file
 * artesis_demo_content.features.inc
 */

/**
 * Implementation of hook_node_info().
 */
function artesis_demo_content_node_info() {
  $items = array(
    'dummy_content' => array(
      'name' => t('Dummy content'),
      'base' => 'node_content',
      'description' => t('Provide dummy content to main menu, for demoing.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
