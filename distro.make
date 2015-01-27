core = 7.x
api = 2
projects[drupal][type] = "core"
projects[drupal][version] = "7.34"
projects[drupal][patch][] = "https://raw.github.com/datagovuk/dgu_d7/master/patches/menu-undefined-offset-1108314.patch"
projects[drupal][patch][] = "https://raw.github.com/datagovuk/dgu_d7/master/patches/add_get_user_data.patch"

projects[ckan_cms][type] = "profile"
projects[ckan_cms][download][type] = "git"
projects[ckan_cms][download][url] = "https://github.com/datagovuk/CKAN-CMS.git"
projects[ckan_cms][download][branch] = "master"
