#include "main.h"
/**
 * swap_int - swaps the values of two integers using pointers
 * @a: the first value
 * @b: the second value
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	
	*a = *b;
	*b = c;	
}
