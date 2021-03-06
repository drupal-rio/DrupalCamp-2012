<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ideation_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ideation_node_info() {
  $items = array(
    'idea_site' => array(
      'name' => t('Idea'),
      'base' => 'node_content',
      'description' => t('A submission of an idea that can be posted, voted on, and commented upon.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ideation_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
