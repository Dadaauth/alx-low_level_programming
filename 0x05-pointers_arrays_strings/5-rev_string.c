#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - reverses a string that is given to it.
 * Return: nothing
 */
void rev_string(char *s)
{
	char ptr_s2[57];
	int i, len = 0;

	while (*(s + len) != '\0')
		len++;

	for (i = 0; *(s + i); i++)
	{
		ptr_s2[i] = s[len - 1];
		len--;
	}
	for (i = 0; ptr_s2[i]; i++)
		s[i] = ptr_s2[i];
}
