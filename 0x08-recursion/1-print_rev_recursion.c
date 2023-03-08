#include <stdio.h>
#include "main.h"
/**
 * get_string_length - gets the length of a given string
 * @s: a pointer to the string to work on
 * @i: just the number 0 but changes at it iterates;
 * Return: Returns the length of the string
 */
int get_string_length(char *s, int i)
{
	if (*(s + i) == '\0')
	{
		return (i - 1);
	}
	i++;
	return (get_string_length(s, i));
}
/**
 * print_rev_string - prints a string in reverse using recursion
 * @s: the string to work on.
 * @str_len: the length of the string to work on
 * Return: nothing
 */
void print_rev_string(char *s, int str_len)
{
	if (str_len < 0)
	{
		return;
	}
	_putchar(*(s + str_len));
	str_len--;
	print_rev_string(s, str_len);
}
/**
 * _print_rev_recursion - prints a string in reverse
 * using recursion. this is the main function
 * @s: the string to print
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int str_len = get_string_length(s, 0);

	print_rev_string(s, str_len);
}
