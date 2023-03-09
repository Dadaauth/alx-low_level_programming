#include "main.h"
#include <stdio.h>
/**
 * get_string_length - get string length
 * @s: the string
 * @i: just 0.
 * Return: string length
 */
int get_string_length(char *s, int i)
{
	if (*(s + i) == '\0')
	{
		return (i - 1);
	}
	i++;
	return (get_string_length(s, i));
}
/**
 * check_palindrome - checks palindrome
 * @s: string to check for
 * @str_len: the length of the string,
 * this is needed to check the string backwards
 * @j: just zero, this is needed to check the string
 * from the beginning
 * Return: 1 if it is palindrom or 0 if otherwise
 */
int check_palindrome(char *s, int str_len, int j)
{
	int k;

	k = 1;

	if (*(s + j) != '\0' && str_len >= 0)
	{
		if (*(s + j) != *(s + str_len))
		{
			return (0);
		}
		str_len--;
		j++;
		k = check_palindrome(s, str_len, j);
	}
	return (k);
}
/**
 * is_palindrome - main function for this task
 * @s: the string to work on
 * Return: 1 if string is palindrome and 0 if otherwise
 */
int is_palindrome(char *s)
{
	int str_len = get_string_length(s, 0);

	return (check_palindrome(s, str_len, 0));
}
