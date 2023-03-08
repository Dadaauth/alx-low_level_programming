#include "main.h"
#include <stdio.h>
/**
 * print_string - prints a string
 * @s: string to print
 * @i: just a variable starting from zero
 * this is needed to make sure it doesn't
 * go into an infinite loop
 *
 */
void print_string(char *s, int i)
{
	if (*(s + i) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + i));
	i++;
	print_string(s, i);
}
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: The string to print
 */
void _puts_recursion(char *s)
{
	int i = 0;

	print_string(s, i);
}
