#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n number of elements in an array
 * @a: an array of integers
 * @n: the number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i + 1 != n)
			printf(", ");
	}
	printf("\n");
}
