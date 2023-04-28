#include <stdio.h>
/**
 * flip_bits - fjfikjf
 * @n: dkfjf
 * @m: dkldjd
 * Return: fkldjkf
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor = n ^ m;

	while (xor != 0)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
