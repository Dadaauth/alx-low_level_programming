#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string followed by a newline to the stdout
 * @str: the string to print
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i); i++)
		_putchar(*(str + i));
	_putchar('\n');
}
