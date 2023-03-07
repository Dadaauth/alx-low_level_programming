#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: where to search
 * @needle: the substring
 * Return: a pointer to the beginning of the located substring, or NULL
 * if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int isAvailable;
	char *f;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == *(needle))
		{
			for (j = 0; *(needle + j) != '\0'; j++)
			{
				if (*(needle + j) == *(haystack + i + j))
				{
					f = (haystack + i);
					isAvailable = 1;
				}
				else
				{
					isAvailable = 0;
					break;
				}
			}
			break;
		}
	}
	if (isAvailable)
	{
		return (f);
	}
	else
	{
		return (NULL);
	}
}
