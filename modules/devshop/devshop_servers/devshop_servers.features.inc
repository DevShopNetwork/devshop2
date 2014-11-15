<?php
/**
 * @file
 * devshop_servers.features.inc
 */

/**
 * Implements hook_node_info().
 */
function devshop_servers_node_info() {
  $items = array(
    'server' => array(
      'name' => t('Server'),
      'base' => 'node_content',
      'description' => t('A server, with a name and a set of IP addresses.'),
      'has_title' => '1',
      'title_label' => t('Host Name'),
      'help' => t('The hostname must resolve to the IP Addresses.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
