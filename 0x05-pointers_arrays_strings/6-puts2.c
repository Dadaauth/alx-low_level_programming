#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other character in a string
 * @str: the string to print
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
