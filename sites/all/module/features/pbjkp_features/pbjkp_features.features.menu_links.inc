<?php
/**
 * @file
 * pbjkp_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function pbjkp_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-us:node/1
  $menu_links['main-menu_about-us:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'About Us',
    'options' => array(
      'identifier' => 'main-menu_about-us:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact-us:contact
  $menu_links['main-menu_contact-us:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact-us:contact',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_create-admit:node/add/create-admit
  $menu_links['main-menu_create-admit:node/add/create-admit'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/create-admit',
    'router_path' => 'node/add/create-admit',
    'link_title' => 'Create Admit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_create-admit:node/add/create-admit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_create-project:node/add/create-project
  $menu_links['main-menu_create-project:node/add/create-project'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/create-project',
    'router_path' => 'node/add/create-project',
    'link_title' => 'Create Project',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_create-project:node/add/create-project',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_create-worker:node/add/create-employee
  $menu_links['main-menu_create-worker:node/add/create-employee'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/create-employee',
    'router_path' => 'node/add/create-employee',
    'link_title' => 'Create Worker',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_create-worker:node/add/create-employee',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_new-projects:new-projects
  $menu_links['main-menu_new-projects:new-projects'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'new-projects',
    'router_path' => 'new-projects',
    'link_title' => 'New Projects',
    'options' => array(
      'identifier' => 'main-menu_new-projects:new-projects',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_view-admit:view-admit
  $menu_links['main-menu_view-admit:view-admit'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'view-admit',
    'router_path' => 'view-admit',
    'link_title' => 'View Admit',
    'options' => array(
      'identifier' => 'main-menu_view-admit:view-admit',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_view-worker:view-worker
  $menu_links['main-menu_view-worker:view-worker'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'view-worker',
    'router_path' => 'view-worker',
    'link_title' => 'View Worker',
    'options' => array(
      'identifier' => 'main-menu_view-worker:view-worker',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Contact Us');
  t('Create Admit');
  t('Create Project');
  t('Create Worker');
  t('Home');
  t('New Projects');
  t('View Admit');
  t('View Worker');


  return $menu_links;
}
