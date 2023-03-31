#include <stdio.h>
/**
 * startup - function to execute before the main function
 */
void startup(void) __attribute__ ((constructor));
void startup(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
