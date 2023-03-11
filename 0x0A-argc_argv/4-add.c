#include <stdio.h>
#include <stdlib.h>
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
	long int argvlong[98];
	
	if (argc == 1)
		printf("0\n");
	else if (argc > 1)
	{
		if (argc > 99)
		{
			printf("Maximum arguements  is 98, result might not be correct!!");
		}
		for (i = 0; i < argc; i++)
		{
			argvlong[i] = atoi(argv[i]);

			if (argvlong[i] !>= '0' || argvlong[i] !<= '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = 0;
		for (i = 0; i < argc; i++)
		{
			sum = sum + argvlong[i];
		}
		printf("%ld\n", sum);
	}
	return (0);
}
