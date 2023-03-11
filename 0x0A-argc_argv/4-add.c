#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * check_all_digit - checks all the digit of the arguements if they are numbers
 * @argc: the number of arguements
 * @argv: an array of the arguements
 * Return: 0 if all are numbers and 1 if not all are numbers
 */
int check_all_digit(int argc, char *argv[])
{
	int i;
	unsigned int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
				continue;
			else
			{
				return (1);
			}
		}
	}
	return (0);
}
/**
 * main - prints the addition of positive arguements
 * @argc: the number of arguements
 * @argv: array of the arguements
 * Return: returns 0, if error return 1
 */
int main(int argc, char *argv[])
{
	int i;
	long int sum;
	long int argvlong[10100];

	if (argc == 1)
		printf("0\n");
	else if (argc > 1)
	{
		if (check_all_digit(argc, argv) == 1)
		{
			printf("Error\n");
			return (1);
		}

		if (argc > 10100)
		{
			printf("Maximum arguements  is 10,100, result might not be correct!!");
		}

		sum = 0;
		for (i = 0; i < argc; i++)
		{
			argvlong[i] = atoi(argv[i]);
			sum = sum + argvlong[i];
		}
		printf("%ld\n", sum);
	}
	return (0);
}
