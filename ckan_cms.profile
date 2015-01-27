<?php

function ckan_cms_form_install_configure_form_alter(&$form, $form_state) {
  $form['site_information']['site_name']['#default_value'] = 'Data Catalogue Demo';
  $form['server_settings']['site_default_country']['#default_value'] = 'GB';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'Europe/London';
  $form['update_notifications']['update_status_module']['#default_value'] = array(1);
}
