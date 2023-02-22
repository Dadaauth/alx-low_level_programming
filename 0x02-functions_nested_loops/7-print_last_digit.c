#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @c: the number to be tested
 * Return: returns the value of the last digit
 */
int print_last_digit(int c)
{

	int last_digit = c % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
