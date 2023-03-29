#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - class a function on each element of an array
 * @array: the array to work on
 * @size: the size of the array
 * @action: the function to call
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	if (array == NULL || action == NULL)
		exit(EXIT_SUCCESS);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
