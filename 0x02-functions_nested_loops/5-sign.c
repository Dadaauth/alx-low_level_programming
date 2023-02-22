#include "main.h"
/**
 * print_sign - prints the sign of the given value
 * @n: the value to be tested
 * Return: returns 1 if greater than zero
 * returns 0 if is zero
 * returns -1 if less than zero
 */
int print_sign(int n)
{
	int rv;

	if (n > 0)
	{
		_putchar('+');
		rv = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		rv = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		rv = -1;
	}
	return (rv);

}
