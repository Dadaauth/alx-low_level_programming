#include <stdio.h>
#include "main.h"
/**
 * _strlen - returs the length of a string
 * @s: the string to work on
 * Return: the length of the given string
 */
int _strlen(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; *(s + i); i++)
		len += 1;
	return (len);
}
