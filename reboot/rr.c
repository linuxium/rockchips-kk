#include <unistd.h>
#include <linux/reboot.h>
void main (){
reboot(LINUX_REBOOT_MAGIC1, LINUX_REBOOT_MAGIC2,
LINUX_REBOOT_CMD_RESTART2,"recovery");
}
