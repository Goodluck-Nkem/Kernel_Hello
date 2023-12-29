#include <linux/module.h>
#include <linux/init.h>

/* Module info required by kernel */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Goodluck-Nkem");
MODULE_DESCRIPTION("Kernel module, does nothing but print to the system log on entry and exit.");

#define DEV_DRIVER_NAME "storm-hello-device"

/**
 * @brief This function is called, when the module is loaded into the kernel
 */
static int __init my_init(void) 
{
	printk("%s::init:: Hello Kernel, Storm has attached!\n", DEV_DRIVER_NAME);
	return 0;
}

/**
 * @brief This function is called, when the module is removed from the kernel
 */
static void __exit my_exit(void) 
{
	printk("%s::exit:: Goodbye Kernel, Storm has detached!\n", DEV_DRIVER_NAME);
}

module_init(my_init);
module_exit(my_exit);
