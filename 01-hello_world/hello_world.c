#include <linux/module.h>
#include <linux/init.h>
#include <linux/printk.h>

static int hello_data __initdata = 10;

static int __init hello_world(void){
	pr_info("Hello world value %d\n",hello_data);
	return 0;
}

static void __exit hello_exit(void){
	pr_info("Goodbye World\n");
}

module_init(hello_world);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("HARSHA G D");
MODULE_DESCRIPTION("A SIMPLE HELLO WORLD KERNEL MODULE");
