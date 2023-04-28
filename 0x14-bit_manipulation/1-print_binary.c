#include <stdio.h>

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask;
	int s = sizeof(unsigned long int);
	int started = 0;

	mask = 1UL << (s * 8 - 1);
	for (i = 0; i < s * 8; i++)
	{
		if (n & mask)
		{
			putchar('1');
			started = 1;
		}
		else if (started)
			putchar('0');
		mask >>= 1;
	}
	if (!started)
		putchar('0');
	putchar('\n');
}
