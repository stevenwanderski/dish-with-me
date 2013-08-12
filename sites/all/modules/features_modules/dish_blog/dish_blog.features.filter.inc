<?php
/**
 * @file
 * dish_blog.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function dish_blog_filter_default_formats() {
  $formats = array();

  // Exported format: HTML.
  $formats['html'] = array(
    'format' => 'html',
    'name' => 'HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
