#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - a fucntion that searches for an integer
 * @array: the array to work on
 * @size: the size of the array
 * @cmp: the function to call
 * Return: returns the index of the first element for which
 * the cmp function does not return zero(0);
 * description: A function that searches for an integer
 * using  the concept of function pointers
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, rtn_val;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		rtn_val = cmp(array[i]);
		if (rtn_val != 0)
			break;
	}
	if (i == size)
		i = -1;
	return (i);
}
