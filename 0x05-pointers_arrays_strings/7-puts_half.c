#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: the string to work on.
 */
void puts_half(char *str)
{
	int len = 0;
	int len2;

	while (str[len] != '\0') 
	{
		len++;
	}
	if (len % 2 == 0)
	{
		len2 = len / 2;
		while (str[len2] != '\0')	
		{
			_putchar(str[len2]);
			len2++;
		}
	}
	else if (len % 2 > 0)
	{
		len2 = (len - 1) / 2;
		while (str[len2] != '\0')
		{
			_putchar(str[len2]);
			len2++;
		}
	}
	_putchar('\n');
}
