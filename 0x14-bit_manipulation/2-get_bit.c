#include <stdio.h>
/**
 * get_bit - dj,he
 * @n: kjf
 * @index: this is the index
 * Return: something
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
