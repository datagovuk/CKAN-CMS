<?php
/**
 * @file
 * dgu_app.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ckan_cms_app_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-app-body'
  $field_instances['node-app-body'] = array(
    'bundle' => 'app',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => 'Please provide a helpful summary of your apps for when your app is published data.gov.uk.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => '6',
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => '1',
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'field_replies' => 0,
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'more_link' => 0,
          'more_text' => 'Read more',
          'quickedit' => array(
            'editor' => 'form',
          ),
          'summary_handler' => 'trim',
          'trim_length' => 250,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => '4',
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'form',
          ),
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => '0',
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-app-field_app_charge'
  $field_instances['node-app-field_app_charge'] = array(
    'bundle' => 'app',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => 'This information will not relayed to other users of the site.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'list_default',
        'weight' => '5',
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '5',
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'list_default',
        'weight' => '2',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '0',
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_app_charge',
    'label' => 'App charge',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-app-field_app_link'
  $field_instances['node-app-field_app_link'] = array(
    'bundle' => 'app',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => 'Enter the URL of this app.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'link',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'link_default',
        'weight' => '4',
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '4',
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'link_default',
        'weight' => '1',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '0',
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_app_link',
    'label' => 'App Link',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-app-field_app_thumbnail'
  $field_instances['node-app-field_app_thumbnail'] = array(
    'bundle' => 'app',
    'deleted' => '0',
    'description' => 'Please supply a square thumbnail image for your application (at least 370x370 pixels). This image will be used on the \'Latest apps\' and \'Top rated apps\' lists.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '14',
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '0',
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '0',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '0',
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_app_thumbnail',
    'label' => 'App thumbnail',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '370x370',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'imagefield_crop',
      'settings' => array(
        'collapsible' => '2',
        'croparea' => '370x370',
        'enforce_minimum' => 1,
        'enforce_ratio' => 1,
        'preview_image_style' => 'tile_text_big',
        'progress_indicator' => 'throbber',
        'resolution' => '370x370',
      ),
      'type' => 'imagefield_crop_widget',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-app-field_category'
  $field_instances['node-app-field_category'] = array(
    'bundle' => 'app',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => '1',
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '10',
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '7',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '0',
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_category',
    'label' => 'Category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-app-field_comment'
  $field_instances['node-app-field_comment'] = array(
    'bundle' => 'app',
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'reply',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'reply_default',
        'weight' => '10',
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '9',
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '11',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '0',
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_comment',
    'label' => 'Comments',
    'required' => 0,
    'settings' => array(
      'access' => -1,
      'allow_reply' => -1,
      'display' => -1,
      'form' => -1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'reply',
      'settings' => array(),
      'type' => 'reply',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-app-field_developed_by'
  $field_instances['node-app-field_developed_by'] = array(
    'bundle' => 'app',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => '0',
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => '0',
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => '0',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '0',
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_developed_by',
    'label' => 'Developed by',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-app-field_rating'
  $field_instances['node-app-field_rating'] = array(
    'bundle' => 'app',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'form',
          ),
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => '3',
      ),
      'rss' => array(
        'label' => 'inline',
        'module' => 'fivestar',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'fivestar_formatter_rating',
        'weight' => '3',
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'form',
          ),
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => '6',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '0',
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rating',
    'label' => 'rating',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(),
      'type' => 'exposed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-app-field_screen_shots'
  $field_instances['node-app-field_screen_shots'] = array(
    'bundle' => 'app',
    'deleted' => '0',
    'description' => 'Please supply additional images of your application so that users can see what it does.
All images will be shown on your app page which click through to the full sized image',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'image_link' => '',
          'image_style' => '',
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'image',
        'weight' => '8',
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '7',
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'field_replies' => 0,
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'image_link' => '',
          'image_style' => 'thumbnail',
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'image',
        'weight' => '5',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '0',
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_screen_shots',
    'label' => 'Screen shots',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'files/apps',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-app-field_sector'
  $field_instances['node-app-field_sector'] = array(
    'bundle' => 'app',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => 'Please specify if the application you are submitting has been commission by public sector department, private sector or 3rd sector (voluntary/non-profit)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '11',
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '11',
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '9',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '0',
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sector',
    'label' => 'Sector',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-app-field_submitter_email'
  $field_instances['node-app-field_submitter_email'] = array(
    'bundle' => 'app',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '13',
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '13',
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '13',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '0',
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_submitter_email',
    'label' => 'Submitter e-mail',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-app-field_submitter_name'
  $field_instances['node-app-field_submitter_name'] = array(
    'bundle' => 'app',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '12',
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '12',
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '12',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '0',
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_submitter_name',
    'label' => 'Submitter Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-app-field_tags'
  $field_instances['node-app-field_tags'] = array(
    'bundle' => 'app',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => 'A comma-separated list of terms describing this content. Example: funny, bungee jumping, "Company, Inc.".',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => '2',
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '6',
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '8',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '0',
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-app-field_uses_dataset'
  $field_instances['node-app-field_uses_dataset'] = array(
    'bundle' => 'app',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'link' => FALSE,
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'entityreference_label',
        'weight' => '7',
      ),
      'rss' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'link' => FALSE,
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'entityreference_label',
        'weight' => '2',
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'field_replies' => '',
          'field_replies_settings' => array(
            'field_replies_reply_field_name' => '',
            'field_replies_revision' => '',
          ),
          'link' => FALSE,
          'quickedit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'entityreference_label',
        'weight' => '3',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '0',
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_uses_dataset',
    'label' => 'Uses dataset',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => '60',
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 9,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A comma-separated list of terms describing this content. Example: funny, bungee jumping, "Company, Inc.".');
  t('App Link');
  t('App charge');
  t('App thumbnail');
  t('Category');
  t('Comments');
  t('Description');
  t('Developed by');
  t('Enter the URL of this app.');
  t('Please provide a helpful summary of your apps for when your app is published data.gov.uk.');
  t('Please specify if the application you are submitting has been commission by public sector department, private sector or 3rd sector (voluntary/non-profit)');
  t('Please supply a square thumbnail image for your application (at least 370x370 pixels). This image will be used on the \'Latest apps\' and \'Top rated apps\' lists.');
  t('Please supply additional images of your application so that users can see what it does.
All images will be shown on your app page which click through to the full sized image');
  t('Screen shots');
  t('Sector');
  t('Submitter Name');
  t('Submitter e-mail');
  t('Tags');
  t('This information will not relayed to other users of the site.');
  t('Uses dataset');
  t('rating');

  return $field_instances;
}
