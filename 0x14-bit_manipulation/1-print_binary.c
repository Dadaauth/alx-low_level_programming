#include <stdio.h>
/**
 * print_binary - kfhdk
 * @n: dkddj
 */
void print_binary(unsigned long int n)
{
	int started = 0;
	for (int i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			started = 1;
			putchar('1');
		}
		else if (started)
		{
			putchar('0');
		}
	}
	if (!started)
	{
		putchar('0');
	}
}
