#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: how many bytes each
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		if (size == sizeof(char))
			*(((char *) p) + i) = 0;
		else if (size == sizeof(int))
			*(((int *) p) + i) = 0;
		else if (size == sizeof(float))
			*(((float *) p) + i) = 0;
		else if (size == sizeof(double))
			*(((double *) p) + i) = 0;
		else
		{
			printf("Size is not definite!\n");
			return (NULL);
		}
	}
	return (p);
}
