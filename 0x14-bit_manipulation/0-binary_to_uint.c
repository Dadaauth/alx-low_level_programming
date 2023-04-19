#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * getStrLen - gets the length of a string
 * @str: the string to work on
 *
 * Return: The length of the string
 */
int getStrLen(const char *str)
{
	int i;
	int length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;
	return (length);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the string of binary numbers
 *
 * Return: Always o.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	int i, j;
	unsigned int temp = 0, powex = 2;
	int strLen;
	int power;

	if (b == NULL)
		return (0);
	strLen = getStrLen(b);
	power = strLen - 1;
	for (i = 0; b[i]; i++)
	{
		if (b[i] - '0' == 1 || b[i] - '0' == 0)
		{
			for (j = 1; j < power; j++)
				powex = powex * 2;
			if (power == 0)
				powex = 1;
			temp = temp + ((b[i] - '0') * powex);
			power = power - 1;
			powex = 2;
		}
		else
		{
			return (0);
		}
	}
	decimal = temp;
	return (decimal);
}
