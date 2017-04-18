<?php
/**
 * @file
 * rn_page_all.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function rn_page_all_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
