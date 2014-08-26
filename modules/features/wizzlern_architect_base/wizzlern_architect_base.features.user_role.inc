<?php
/**
 * @file
 * wizzlern_architect_base.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function wizzlern_architect_base_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 5,
  );

  // Exported role: beheer.
  $roles['beheer'] = array(
    'name' => 'beheer',
    'weight' => 4,
  );

  // Exported role: columnist.
  $roles['columnist'] = array(
    'name' => 'columnist',
    'weight' => 2,
  );

  // Exported role: redactie.
  $roles['redactie'] = array(
    'name' => 'redactie',
    'weight' => 3,
  );

  return $roles;
}
