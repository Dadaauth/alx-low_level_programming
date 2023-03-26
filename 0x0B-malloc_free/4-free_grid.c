#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a two dimensional array created with malloc() function
 * @grid: a pointer to pointer of the array to free
 * @height: the height of the array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
