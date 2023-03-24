#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: Always zero 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
