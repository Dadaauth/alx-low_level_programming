#include "main.h"
#include <stdio.h>
/**
 * calc_pow - calculates the power of a number
 * @x: the number
 * @y: the power
 * @z: the number again, this has to be constant
 * through recursive calls
 * Return: the power calculated
 */
int calc_pow(int x, int y, int z)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	y--;
	x = x * calc_pow(x, y, z);
	return (x);

}
/**
 * _pow_recursion - returns the power of a number. main function
 * @x: the number
 * @y: the power
 * Return: returns the power of the number
 */
int _pow_recursion(int x, int y)
{
	return (calc_pow(x, y, x));
}
