#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the arguements given to the function
 * @argc: the arg count
 * @argv: an array of the arguements
 * Return: returns success
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	exit(EXIT_SUCCESS);
}
