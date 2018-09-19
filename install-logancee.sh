drush sql-drop
sudo rm sites/default/settings.php
sudo rm -r sites/default/files
sudo cp sites/default/default.settings.php sites/default/settings.php
sudo  chmod -R 777 sites/default/settings.php
drush --uri=http://localhost/logancee/ site-install logancee --db-url=mysql://root:password@localhost/logancee  --account-pass=admin123 --site-name=logancee --account-mail=admin@example.com --site-mail=admin@example.com
sudo chmod -R 444 sites/settings.php
