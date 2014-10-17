<?php
/**
 * @file
 * pbjkp_features.features.inc
 */

/**
 * Implements hook_views_api().
 */
function pbjkp_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pbjkp_features_node_info() {
  $items = array(
    'create_admit' => array(
      'name' => t('Create Admit'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Roll'),
      'help' => '',
    ),
    'create_employee' => array(
      'name' => t('Create Employee'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Employee ID'),
      'help' => '',
    ),
    'create_project' => array(
      'name' => t('Create Project'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
