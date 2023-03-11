#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplicatin of two arguements
 * @argc: the arguements count
 * @argv: an array of the integers
 * Return: returns success
 */
int main(int argc, char *argv[])
{
	long int arg1, arg2, result;

	if (argc == 1 || argc == 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	result = arg1 * arg2;

	printf("%ld\n", result);

	return (0);
}
