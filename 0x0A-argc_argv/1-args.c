#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguements
 * passed into the program
 * @argc: number of arguements
 * @argv: an array of arguements
 * Return: Returns success
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	exit(EXIT_SUCCESS);
}
