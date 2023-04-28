#include <stdio.h>

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask;
	int s = sizeof(unsigned long int);
	mask = 1UL << (s * 8 - 1);

	for (i = 0; i < s * 8; i++)
	{
		putchar((n & mask) ? '1' : '0');
		mask >>= 1;
	}
	putchar('\n');
}
