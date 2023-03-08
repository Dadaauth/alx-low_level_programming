#include "main.h"
#include <stdio.h>
/**
 * count_length - counts the length of a string
 * @s: the string to count
 * @i: just an integer with the value zero
 * changes with each recursive call
 * Return: The length of the string
 */
int count_length(char *s, int i)
{
	if (*(s + i) == '\0')
		return (i);
	i++;
	return (count_length(s, i));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to work on
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	return (count_length(s, 0));
}
