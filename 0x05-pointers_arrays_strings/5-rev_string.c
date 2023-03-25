#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - reverses a string that is given to it.
 * @s: the string to change
 * Return: nothing
 */
void rev_string(char *s)
{
	char temp;
	int i, len = 0, len2;

	while (*(s + len) != '\0')
		len++;
	len2 = len;
	for (i = 0; i < len2 / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1];
		s[len - 1] = temp;
		len--;
	}
}
