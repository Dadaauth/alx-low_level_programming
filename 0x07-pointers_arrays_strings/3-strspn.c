#include <stdio.h>
#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to work on
 * @accept: string to check for
 * Return: returns the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int len;

	len = 0;

	for (i = 0; *(accept + i) != '\0'; i++ )
	{
		for (j = 0; *(s + j) != ' '; j++)
		{
			if (*(s + j) == *(accept + i))
			{
				len++;
			}
		}
	}
	return (len);
}
