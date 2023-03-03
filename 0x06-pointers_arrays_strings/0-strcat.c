#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: a string to work on
 * @src: another string to work on
 * Return: the value of the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}
