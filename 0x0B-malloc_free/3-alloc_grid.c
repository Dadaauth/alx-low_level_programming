#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - creates a two dimensional array of integers,
 * size is based on the value given to it and all int values
 * in the array is zero(0)
 * @width: width of the array
 * @height: height of the arrray
 * Return: a pointer to the two dimensional array created.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int h;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc((height) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		array[h] = malloc(width * sizeof(int));
		if (array[h] == NULL)
			return (NULL);
	}

	return (array);
}
