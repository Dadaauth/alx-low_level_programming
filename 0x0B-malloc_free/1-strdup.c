#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_len - gets the length of the given string
 * @str: the string to test
 * @n: just the number 0.
 * Return: the length of the string
 */
unsigned int string_len(char *str, int n)
{
	if (*(str + n) == '\0')
		return (n);
	n = n + 1;
	return (string_len(str, n));
}
/**
 * _strdup - duplicates a string and returns a pointer to the
 * address of the string.
 * @str: the string to duplicate
 * Return: a pointer to the address of the duplicated string
 * or NULL if an error occurs or if str == NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;
	unsigned int str_len;

	if (!str)
		return (NULL);
	str_len = string_len(str, 0);
	ptr = malloc(str_len + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < str_len + 1; i++)
	{
		ptr[i] = str[i];
	}

	return (ptr);
}
