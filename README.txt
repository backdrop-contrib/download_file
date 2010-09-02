// $Id$

-- SUMMARY --

DownloadFile is a module to direct download files or images.

For a full description of the module, visit the project page:
  http://drupal.org/project/download_file

To submit bug reports and feature suggestions, or to track changes:
  http://drupal.org/project/issues/download_file

-- REQUIREMENTS --

 * File

-- INSTALLATION --

1) Copy the download_file folder to the modules folder in your installation.

2) Enable the module using Administer -> Site building -> Modules
   (/admin/build/modules).

3) Configure user permissions in Administer -> User management -> Permissions ->
   download_file module and "access direct download file".

3) Manage teaser and full node display settings at Administer -> Content
   -> Content types -> "your type" -> Manage fields
   (/admin/content/node-type/"your type"/fields)
   and click on the tab Display fields
   (/admin/content/node-type/"your type"/display).

4) Choose a formatter to apply to files or images in that field. Two new
   formatters appear in the select list "Direct download file" and
   "Direct download file accessible".

Using with Views module
-----------------------
Similarly, you can use a formatter when displaying files or images attached to
nodes using FileField or ImageField in a View (http://drupal.org/project/views)
through the Views UI.

1) Manage display at Site building -> Views (/admin/build/views) and edit an
   existing view by clicking the "Edit" link
   (/admin/build/views/edit/"your view").

2) Click on a file field or image field.

3) Choose a formatter in select list "Format" to apply at this field. Two new
   formatters appear "Direct download file" and
   "Direct download file accessible".

4) Click on "Update" bouton and see the display in the preview.

-- CONTACT --

Current maintainer:
* Matthieu Moratille (xMATTx) - http://drupal.org/user/394628

This project has been sponsored by:
* CORE-TECHS
  An innovative company based in Paris whose activities are structured around
  the software production, service delivery and use of open source technologies.
  Visit http://www.core-techs.fr for more information.
