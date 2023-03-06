#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: the string to locate the character
 * @c: this is the character to locate
 * Return: Returns a pointer to the first occurence of the character
 * but null if it doesn't contain the char
 */
char *_strchr(char *s, char c)
{
	int i, len;

	len = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i <= len + 1; i++)
	{
		if (*(s + i) == c)
		{
			return ((s + i));
		}
	}

	return (NULL);
}
