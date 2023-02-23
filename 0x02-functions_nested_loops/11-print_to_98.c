#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers form n to 98
 * @n: number to be tested
 */
void print_to_98(int n)
{
	int num_to = 98;

	while (n < num_to)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > num_to)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == num_to)
	{
		printf("%d", n);
	}
	printf("\n");
}
