<?php
/**
 * @file
 * partyplanet_core.features.inc
 */

/**
 * Implements hook_node_info().
 */
function partyplanet_core_node_info() {
  $items = array(
    'activity' => array(
      'name' => t('Activity'),
      'base' => 'node_content',
      'description' => t('An activity item'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
