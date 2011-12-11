<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_time_tracker_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}
