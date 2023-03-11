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
	if (argc == 1 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	exit(EXIT_SUCCESS);
}
