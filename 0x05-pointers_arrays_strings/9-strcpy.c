#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies a string from src to dest
 * @dest: where to copy the string to
 * @src: the string to copy
 * Return: A pointer to dest
 */
char *_strcpy(char *dest, __attribute__ ((unused))char *src)
{
	__attribute__ ((unused))int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
