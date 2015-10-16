<?php
/**
 * @file
 * bootstrap_2_views_carousel.features.inc
 */

/**
 * Implements hook_views_api().
 */
function bootstrap_2_views_carousel_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function bootstrap_2_views_carousel_image_default_styles() {
  $styles = array();

  // Exported image style: bootstrap_views_carousel.
  $styles['bootstrap_views_carousel'] = array(
    'label' => 'Bootstrap Views Carousel',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 870,
          'height' => '',
          'upscale' => 0,
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
function bootstrap_2_views_carousel_node_info() {
  $items = array(
    'bootstrap_2_views_carousel_slide' => array(
      'name' => t('Bootstrap Views Carousel Slide'),
      'base' => 'node_content',
      'description' => t('Upload slide images and caption data that integrates with Bootstrap 2.x carousel.'),
      'has_title' => '1',
      'title_label' => t('Heading'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
