#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * Return: Always 0.
 */
int main (void)
{
	char str[] = "I love computers soo much for i am born as an inventor!!!";

	printf("str: %s\n", str);
	rev_string(str);
	printf("str: %s\n", str);
	return (0);
}
