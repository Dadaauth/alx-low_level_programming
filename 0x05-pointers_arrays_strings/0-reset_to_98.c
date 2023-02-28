#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - changes the value a pointer points to to 98.
 * @n: The pointer to change the value
 * Return: nothing
 */
void reset_to_98(int *n)
{
	*n = 98;
	printf("Value of *n: %d", *n);
}
