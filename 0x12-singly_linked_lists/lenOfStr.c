#include <stdio.h>
/**
 * lenOfStr -  returns te length of a string
 * @str: the string to work on
 * Return: the amount of characters present in the string
 * apart from the null character (\0);
 */
size_t lenOfStr(char *str)
{
	int i;
	size_t len = 0;

	for (i = 0; str[i]; i++)
		len++;
	return (len);
}
