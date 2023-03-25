#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
	int len = 0, i, n;

	while (str[len])
		len++;
	if (len % 2 == 0)
		n = len / 2;
	else if (len % 2 != 0)
		n = (len - 1) / 2;
	i = len - n;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
