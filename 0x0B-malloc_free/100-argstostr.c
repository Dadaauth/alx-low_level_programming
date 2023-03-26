#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments in a program
 * @ac: arguments count
 * @av: arguments vector
 * Return: NULL if ac == 0 or av == NULL Else a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, length = 0;
	int malloc_length;
	char *newStr;
	int f;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			length++;
		}
	}
	malloc_length = length + ac + 1;

	newStr = malloc(malloc_length * sizeof(char));
	if (newStr ==NULL)
		return (NULL);
	f = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			newStr[f] = av[i][j];
			f++;
		}
		newStr[f] = '\n';
		f++;
	}
	newStr[f] = '\0';
	return (newStr);
}
