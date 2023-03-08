#include "main.h"
#include <stdio.h>
/**
 * get_sqrt - gets the square root of a number
 * @n: the number
 * @n2: the number again value based on the
 * _sqrt_recursion() function
 * Return: the square root of the number
 * returns 0 if n == 0, -1 id n < 0 and if n2 == 0
 */
int get_sqrt(int n, long unsigned int n2)
{
	long unsigned int nst = n;
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	if (n2 == 0)
		return (-1);
	if (n2 * n2 == nst)
		return (n2);
	n2--;
	return (get_sqrt(n, n2));
}
/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number to work on
 * Return: The square root, may vary based on different
 * conditions, see: get_sqrt() documentation for more info
 */
int _sqrt_recursion(int n)
{
	long unsigned int n2;

	if (n > 100000 && n < 999999)
		n2 = n / 50;
	else if (n > 999999)
		n2 = n / 100;
	else
		n2 = n; 
	return (get_sqrt(n, n2));
}
