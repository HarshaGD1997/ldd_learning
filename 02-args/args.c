#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/printk.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("HARSHA G D");
MODULE_DESCRIPTION("Example program that takes in args");

static int __init module_start(void){


}

static void __exit module_end(void){


}

module_init(module_start);
module_exit(module_end);