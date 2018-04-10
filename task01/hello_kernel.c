#include <linux/module.h>

int init_module(void) {
pr_debug("Hello World!\n");
return 0;
}

void cleanup_module(void) {

}

MODULE_AUTHOR("Girish Bhangale <girish.1605@gmail.com>");
MODULE_DESCRIPTION("[fe02ebbb9295] Eudyptula Challenge Task 01 Result");
MODULE_LICENSE("GPL");

