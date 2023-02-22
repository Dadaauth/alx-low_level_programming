
#include "main.h"
/**
 * _isalpha - checks if the given value is an alphabet
 * @c: The value to be tested
 * Return: returns 1 if c is a letter
 * and returns 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
