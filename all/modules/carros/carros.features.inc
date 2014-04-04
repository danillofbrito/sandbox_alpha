<?php
/**
 * @file
 * carros.features.inc
 */

/**
 * Implements hook_views_api().
 */
function carros_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function carros_image_default_styles() {
  $styles = array();

  // Exported image style: car_style.
  $styles['car_style'] = array(
    'name' => 'car_style',
    'label' => 'Car style',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function carros_node_info() {
  $items = array(
    'carro' => array(
      'name' => t('Carro'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Modelo'),
      'help' => '',
    ),
  );
  return $items;
}
