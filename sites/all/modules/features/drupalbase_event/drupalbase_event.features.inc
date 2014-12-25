<?php
/**
 * @file
 * drupalbase_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalbase_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function drupalbase_event_node_info() {
  $items = array(
    'drupalbase_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Use for events - including historical events'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
