<?php

/**
 * @file
 * Download file administration settings.
 */

/**
 * Configure the format of the link accessible.
 *
 * @see system_settings_form()
 */
function download_file_settings() {
  $form['#config'] = 'download_file.settings';
  $form['download_file_accessible_format'] = array(
    '#type' => 'textfield',
    '#title' => t('Format (without HTML)'),
    '#default_value' => config_get('download_file.settings', 'download_file_accessible_format'),
    '#description' => t('Customize the format of the link accessible. Required variables are: <em>!extension</em> and <em>!file_size</em>.'),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}

/**
 * Validate download_file_settings form submissions.
 */
function download_file_settings_validate($form, &$form_state) {
  $format = $form_state['values']['download_file_accessible_format'];

  if (strpos($format, '!extension') === FALSE || strpos($format, '!file_size') === FALSE) {
    form_set_error('download_file_accessible_format', t('The format must contain the two variables <em>!extension</em> and <em>!file_size</em>.'));
  }
  elseif (strip_tags($format) != $format) {
    form_set_error('download_file_accessible_format', t('The format must not contain any HTML tags.'));
  }
}

/**
 * Reset download_file_settings.
 */
function download_file_settings_reset($form, &$form_state) {
  // Set variable for the accessible format.
  config_set('download_file.settings', 'download_file_accessible_format', '(format !extension / !file_size)');

  backdrop_set_message(t('The configuration option has been reset to its default values.'));
}

/**
 * Submit download_file_settings.
 */
function download_file_settings_submit($form, &$form_state) {
  $format = check_plain(strip_tags($form_state['values']['download_file_accessible_format']));

  // Set variable for the accessible format.
  config_set('download_file.settings', 'download_file_accessible_format', $format);

  backdrop_set_message(t('The configuration option has been saved.'));
}
