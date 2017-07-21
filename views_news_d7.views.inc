<?php
/**
 * @file
 * Views-specific implementations and functions.
 */

/**
 * Implements hook_views_plugins().
 */
function views_news_d7_views_plugins() {
  return array(
    'style' => array(
      'byu_news' => array(
        'title' => t('BYU News'),
        'help' => t('Display content in a BYU News Feed.'),
        'handler' => 'views_news_d7_plugin_style_byu_news',
        'theme' => 'views_view_byu_news',
        'uses row plugin' => TRUE,
        'uses row class' => FALSE,
        'uses options' => TRUE,
        'uses grouping' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}
