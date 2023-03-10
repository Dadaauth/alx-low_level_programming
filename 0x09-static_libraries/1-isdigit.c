#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: variable to be tested
 * Return: returns 1 if c is a digit
 * and 0 if otherwise
 */
int _isdigit(int c)
{
	int is_digit;

	if (c >= '0' && c <= '9')
	{
		is_digit = 1;
	}
	else
	{
		is_digit = 0;
	}
	return (is_digit);
}
