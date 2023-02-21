#include "main.h"

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}	
}
