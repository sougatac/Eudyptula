/*
 * Hello world program. 
 * Prints hello world from kernel.  
 */

#include <linux/module.h> /* defn of module init and exit*/
#include <linux/kernel.h> /* defn of print functions*/
#include <linux/init.h>

/* Function for module init */

int helloworld_init(void)
{
  pr_notice("Loading helloworld module. Invoking %s\n",__FUNCTION__);
  printk(KERN_DEBUG "Hello World!\n");
  return 0;
}

/* Function for module exit */

void helloworld_exit(void)
{
  pr_notice("Unloading helloworld module\n");
}


/* Register the functions */

module_init(helloworld_init);
module_exit(helloworld_exit);

/* Module info */

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sougata");
MODULE_DESCRIPTION("Hello World program");
