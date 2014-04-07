<?php
/**
 * @file
 * carros.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function carros_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_foto'
  $field_bases['field_foto'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_foto',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_marca'
  $field_bases['field_marca'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_marca',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'BMW' => 'BMW',
        'Ferrari' => 'Ferrari',
        'Fiat' => 'Fiat',
        'Ford' => 'Ford',
        'GM' => 'GM',
        'Honda' => 'Honda',
        'Hyundai' => 'Hyundai',
        'Toyota' => 'Toyota',
        'Volkswagen' => 'Volkswagen',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
