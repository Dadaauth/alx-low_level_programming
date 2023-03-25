#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other character in a string
 * @str: the string to print
 */
void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i])
	{
		_putchar(str[i + j]);
		i++;
		j++;
	}
	_putchar('\n');
}
