#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies a string from src to dest
 * @dest: where to copy the string to
 * @src: the string to copy
 * Return: A pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i])
	{
		dest[i]	= src[i];
		printf("Testing if this is truely working!!!");
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
