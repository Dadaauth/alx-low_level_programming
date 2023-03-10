#include "main.h"
/**
 * _isupper - checks if a variable is an uppercase character
 * @c: The value to be checked
 * Return: returns 1 if c is uppercase
 * and 0 if otherwise
 */
int _isupper(int c)
{
	int is_upper;

	if (c >= 'A' && c <= 'Z')
	{
		is_upper = 1;
	}
	else
	{
		is_upper = 0;
	}
	return (is_upper);
}
