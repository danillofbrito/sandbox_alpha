<?php
/**
 * @file
 * carros.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function carros_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-carros-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'carros-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -9,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'shiny' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'shiny',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
