
Debian
====================
This directory contains files used to package newbitd/newbit-qt
for Debian-based Linux systems. If you compile newbitd/newbit-qt yourself, there are some useful files here.

## newbit: URI support ##


newbit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install newbit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your newbit-qt binary to `/usr/bin`
and the `../../share/pixmaps/newbit128.png` to `/usr/share/pixmaps`

newbit-qt.protocol (KDE)

