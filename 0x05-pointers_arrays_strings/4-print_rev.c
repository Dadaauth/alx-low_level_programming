#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to print
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (*(s + len))
		len++;
	while (len > 0)
	{
		_putchar(*(s + len - 1));
		len--;
	}
	putchar('\n');
}
