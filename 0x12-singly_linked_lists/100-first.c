#include <stdio.h>
#include "lists.h"
/**
 * execFirst - executes this function before
 * the main function is called.
 */
__attribute__ ((constructor))void execFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
