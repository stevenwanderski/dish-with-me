<?php
/**
 * @file
 * dish_blog.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function dish_blog_user_default_roles() {
  $roles = array();

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 2,
  );

  return $roles;
}
