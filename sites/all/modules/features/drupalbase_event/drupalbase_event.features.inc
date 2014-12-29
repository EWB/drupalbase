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
