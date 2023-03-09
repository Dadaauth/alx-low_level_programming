#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: the array to work on
 * @size: the size of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;

	printf("Debugging--------------%d\n", *(a + 1));

	j = 0;
	for (i = 0; i < size; i++)
	{
		j += *(a + i + i);
	}
	printf("%d\n", j);
}
