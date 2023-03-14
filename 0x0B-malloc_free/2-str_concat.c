#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_len - gets the length of a string
 * @str: the string to work with
 * Return: returns the length of the string
 */
int string_len(char *str)
{
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; *(str + i) != '\0'; i++)
	{
		continue;
	}
	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: returns a pointer to the memory allocated
 * for the string concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, i, j;
	char *result;

	s1_len = string_len(s1);
	s2_len = string_len(s2);

	result = malloc((s1_len + s2_len + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0, j = 0; i < (s1_len + s2_len); i++)
	{
		if (i < s1_len)
		{
			if (s1 == NULL)
				continue;
			*(result + i) = *(s1 + i);

			continue;
		}
		else if (i >= s1_len && i < (s2_len + s1_len))
		{
			if (j == s2_len)
			{
				*(result + i) = '\0';
				continue;
			}
			if (s2 == NULL)
				continue;
			*(result + i) = *(s2 + j);
			j = j + 1;
			continue;
		}
	}
	return (result);
}
