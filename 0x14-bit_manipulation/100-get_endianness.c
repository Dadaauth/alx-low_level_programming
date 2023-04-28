#include <stdio.h>
#include "main.h"
/**
 * get_endianness - fkfjhf
 * Return: fkjdd
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *p = (char *)&n;

	return (*p == 1);
}
