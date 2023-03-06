#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies memory area
 * @dest: the destination to copy the memory to
 * @src: the memory to copy
 * @n: number of bytes to copy
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
