#include "main.h"
/*
 * puts - Prints a String followed by a new line to the stdout
 * @str: The string to be printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
