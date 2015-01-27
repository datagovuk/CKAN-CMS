CKAN-CMS
======

Drupal 7 distribution with CKAN integration


INSTALLATION
============

To use this drupal distribution, you will need to have a LAMP stack and a working drush installation.  Please see
https://drupal.org/requirements for detailed requirements. You can get drush and it's installation instructions from
here: https://github.com/drush-ops/drush

Once you have the requirements sorted out, you can install drupal with the following drush commands:

````bash
$ drush make distro.make /var/www/
$ drush --yes --verbose site-install ckan_cms --db-url=mysql://user:pass@localhost/db_name --account-name=admin --account-pass=password  --site-name='something creative'
```
