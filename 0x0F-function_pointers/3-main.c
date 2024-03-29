#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"
/**
 * main - the main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always zero
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int (*f)(int a, int b);
	int r;

	if (argc == 4)
	{
		r = atoi(argv[3]);
		if (r == 0 && (strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0))
		{
			printf("Error\n");
			exit(100);
		}

		f = get_op_func(argv[2]);
		if (f != NULL)
		{
			printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
		}
		else
		{
			printf("Error\n");
			exit(99);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
