# odrive_locker
Locks optical drive, prevents hardware triggered ejection of cd/dvd tray.

## Configuration
Uncommenting the line

#ENV{DISK_EJECT_REQUEST}=="?*", RUN+="cdrom_id --eject-media $devnode", GOTO="cdrom_end"

in file */etc/udev/rules.d/60-cdrom_id.rules*, as attached.

## Compiling / building
gcc cdioctl.c -o cdioctl && ./cdioctl
