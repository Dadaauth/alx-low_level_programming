#include <stdio.h>
#include <stdlib.h>
/**
 * main - gets the name of the program
 * @argc: the number of arguements on the command line
 * @argv: the arguements in an array
 * Return: returns success
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	exit(EXIT_SUCCESS);
}
