<?php
/**
 * @file
 * drupalbase_core.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function drupalbase_core_image_default_styles() {
  $styles = array();

  // Exported image style: jumbo__960_x_960_.
  $styles['jumbo__960_x_960_'] = array(
    'name' => 'jumbo__960_x_960_',
    'label' => 'Jumbo (960 x 960)',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 960,
          'height' => 960,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: medium_mobile__320_x_320_.
  $styles['medium_mobile__320_x_320_'] = array(
    'name' => 'medium_mobile__320_x_320_',
    'label' => 'Medium Mobile (320 x 320)',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => 320,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: super_jumbo__2000_x_2000_.
  $styles['super_jumbo__2000_x_2000_'] = array(
    'name' => 'super_jumbo__2000_x_2000_',
    'label' => 'Super Jumbo (2000 x 2000)',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 2000,
          'height' => 2000,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
