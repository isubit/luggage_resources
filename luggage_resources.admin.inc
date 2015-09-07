<?php

function luggage_resources_settings() {
  // Add form to get screenshot server URL.
  $form['resources'] = array(
    '#type' => 'fieldset',
    '#title' => t('Configure Luggage Resources'),
  );

  $form['resources']['luggage_resources_screenshot_url'] = array(
    '#type' => 'textfield',
    '#title' => t('URL of screenshot generator'),
    '#default_value' => variable_get('luggage_resources_screenshot_url', 'http://api.ent.iastate.edu/screenshot/generate.wsgi'),
    '#description' => t('This is the service that generates the screenshot for Luggage resources nodes.<br />Be sure to include http:// or https://.')
  );

  return system_settings_form($form);
}

function luggage_resources_settings_validate($form, &$form_state) {
  if (!valid_url($form_state['values']['luggage_resources_screenshot_url'], true)) {
    form_set_error('luggage_resources_screenshot_url', t("Please enter a valid URL."));
  }
}
