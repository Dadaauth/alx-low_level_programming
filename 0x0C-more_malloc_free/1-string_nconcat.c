#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * getstr_len - gets the length of a string
 * @s: the string
 * Return: the length of the string;
 */
unsigned int getstr_len(char *s)
{
	int i;
	unsigned int str_l = 0;

	if (s == NULL)
		return (str_l);
	for (i = 0; s[i]; i++)
		str_l++;
	return (str_l);
}
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concatenates from s2
 * Return: a pointer to a newly allocated space in
 * memory which contains s1 in addition to the first n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int str_l1, str_l2;
	unsigned int malloc_size;
	char *p;
	unsigned int i, j = 0;

	str_l1 = getstr_len(s1);
	str_l2 = getstr_len(s2);
	if (n >= str_l2)
	{
		n = str_l2;
		malloc_size = (str_l1 + str_l2 + 1);
	}
	else
		malloc_size = (str_l1 + n + 1);
	p = malloc(malloc_size * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < (malloc_size - 1); i++)
	{
		if (i < str_l1)
			p[i] = s1[i];
		else if (i >= str_l1)
		{
			if (j < n)
			{
				p[i] = s2[j];
				j++;
			}
		}
	}
	p[i] = '\0';
	return (p);
}
