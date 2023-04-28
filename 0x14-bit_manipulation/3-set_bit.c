#include <stdio.h>
/**
 * set_bit - jklenlv
 * @n: fkdj
 * @index: fdkj f
 * Return: ddjkd
 */
int set_bit(unsigned long int *n, unsigned int index) {
	if (index >= sizeof(unsigned long int) * 8)
	{
		return -1;
	}
	*n |= 1UL << index;
	return 1;
}
