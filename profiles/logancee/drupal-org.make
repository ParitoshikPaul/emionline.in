; Recruiter drush make build file for drupal.org packaging.
core = 7.41

api = 2

; Modules

projects[tb_megamenu][version] = "1.0-rc2"
; Make configuration exportable by features https://www.drupal.org/node/2028545
projects[tb_megamenu][patch][] = "https://www.drupal.org/files/issues/tb_megamenu-make_menu_configuration_exportable_for_features-2028545-34.patch"