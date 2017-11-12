#include <sys/ioctl.h>
#include <fcntl.h>

int open_cdrom(char *cdrom_dev_file);

int main(void) {
  ioctl(open_cdrom("/dev/cdrom"), 0x5329, 1);
  return 0;
}

int open_cdrom(char *cdrom_dev_file) {
	return (open(cdrom_dev_file, O_RDONLY | O_NONBLOCK));
}

#if 0
// udevadm control --reload-rules && udevadm trigger


//  #define CDROM_LOCKDOOR	0x5329 /* lock or unlock door */
//https://github.com/torvalds/linux/blob/master/include/uapi/linux/cdrom.h
//https://stackoverflow.com/questions/12806053/get-terminal-width-haskell#12807521

#endif

