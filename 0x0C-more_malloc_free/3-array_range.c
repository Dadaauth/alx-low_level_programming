#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: the minimum integer
 * @max: the maximum integer
 * Return: a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int malloc_size;
	int *p;
	int i;

	if (min > max)
		return (NULL);
	malloc_size = (max - min) + 1;
	p = malloc(malloc_size * sizeof(int));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < malloc_size; i++)
	{
		p[i] = min++;
	}
	return (p);
}
