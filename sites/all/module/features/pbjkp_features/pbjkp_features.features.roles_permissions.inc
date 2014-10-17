<?php
/**
 * @file
 * pbjkp_features.features.roles_permissions.inc
 */

/**
 * Implements hook_default_roles_permissions().
 */
function pbjkp_features_default_roles_permissions() {
  $roles = array();

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
    'permissions' => array(
      'access administration pages' => TRUE,
      'access all views' => TRUE,
      'access comments' => TRUE,
      'access content' => TRUE,
      'access content overview' => TRUE,
      'access contextual links' => TRUE,
      'access dashboard' => TRUE,
      'access overlay' => TRUE,
      'access site in maintenance mode' => TRUE,
      'access site reports' => TRUE,
      'access site-wide contact form' => TRUE,
      'access toolbar' => TRUE,
      'access user contact forms' => TRUE,
      'access user profiles' => TRUE,
      'administer actions' => TRUE,
      'administer blocks' => TRUE,
      'administer comments' => TRUE,
      'administer contact forms' => TRUE,
      'administer content types' => TRUE,
      'administer features' => TRUE,
      'administer filters' => TRUE,
      'administer image styles' => TRUE,
      'administer menu' => TRUE,
      'administer modules' => TRUE,
      'administer nodes' => TRUE,
      'administer permissions' => TRUE,
      'administer search' => TRUE,
      'administer shortcuts' => TRUE,
      'administer site configuration' => TRUE,
      'administer software updates' => TRUE,
      'administer taxonomy' => TRUE,
      'administer themes' => TRUE,
      'administer url aliases' => TRUE,
      'administer users' => TRUE,
      'administer views' => TRUE,
      'block IP addresses' => TRUE,
      'bypass node access' => TRUE,
      'cancel account' => TRUE,
      'change own username' => TRUE,
      'create article content' => TRUE,
      'create page content' => TRUE,
      'create url aliases' => TRUE,
      'customize shortcut links' => TRUE,
      'delete any article content' => TRUE,
      'delete any page content' => TRUE,
      'delete own article content' => TRUE,
      'delete own page content' => TRUE,
      'delete revisions' => TRUE,
      'delete terms in 1' => TRUE,
      'edit any article content' => TRUE,
      'edit any page content' => TRUE,
      'edit own article content' => TRUE,
      'edit own comments' => TRUE,
      'edit own page content' => TRUE,
      'edit terms in 1' => TRUE,
      'generate features' => TRUE,
      'manage features' => TRUE,
      'post comments' => TRUE,
      'rename features' => TRUE,
      'revert revisions' => TRUE,
      'search content' => TRUE,
      'select account cancellation method' => TRUE,
      'skip comment approval' => TRUE,
      'switch shortcut sets' => TRUE,
      'use advanced search' => TRUE,
      'use text format filtered_html' => TRUE,
      'use text format full_html' => TRUE,
      'view own unpublished content' => TRUE,
      'view revisions' => TRUE,
      'view the administration theme' => TRUE,
    ),
  );

  return $roles;
}
