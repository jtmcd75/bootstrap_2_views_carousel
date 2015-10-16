<?php
/**
 * @file
 * bootstrap_2_views_carousel.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function bootstrap_2_views_carousel_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create bootstrap_2_views_carousel_slide content'.
  $permissions['create bootstrap_2_views_carousel_slide content'] = array(
    'name' => 'create bootstrap_2_views_carousel_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any bootstrap_2_views_carousel_slide content'.
  $permissions['delete any bootstrap_2_views_carousel_slide content'] = array(
    'name' => 'delete any bootstrap_2_views_carousel_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own bootstrap_2_views_carousel_slide content'.
  $permissions['delete own bootstrap_2_views_carousel_slide content'] = array(
    'name' => 'delete own bootstrap_2_views_carousel_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any bootstrap_2_views_carousel_slide content'.
  $permissions['edit any bootstrap_2_views_carousel_slide content'] = array(
    'name' => 'edit any bootstrap_2_views_carousel_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own bootstrap_2_views_carousel_slide content'.
  $permissions['edit own bootstrap_2_views_carousel_slide content'] = array(
    'name' => 'edit own bootstrap_2_views_carousel_slide content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
