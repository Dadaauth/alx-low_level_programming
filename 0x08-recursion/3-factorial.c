#include <stdio.h>
#include "main.h"
/**
 * factorial - gets & returns the factorial of a given number
 * @n: the number to work on
 * Return: the factorial of the number
 * but returns -1 indicating error if n < 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
