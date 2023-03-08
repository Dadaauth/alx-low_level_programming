#include "main.h"
#include <stdio.h>
/**
 * get_sqrt - gets the square root of a number
 * @n: the number
 * @n2: the number again
 * Return: the square root of the number
 * returns 0 if n == 0, -1 id n < 0 and if n2 == 0
 */
int get_sqrt(int n, int n2)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	if (n2 == 0)
		return (-1);
	if (n2 * n2 == n)
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
	int f = get_sqrt(n, n);

	return (f);
}
