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
    int i, j;

    array = malloc(sizeof(int *) * height);
    for (i = 0; i < height; i++)
    {
        array[i] = malloc(sizeof(int) * width);
        for (j = 0; j < width; j++)
            array[i][j] = 0;
    }
    return (array);
}
