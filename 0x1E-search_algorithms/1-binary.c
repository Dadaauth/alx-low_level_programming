#include <stdio.h>
/**
 * binary_search - searches a sorted array of integers using 
 * the Binary search algorithm
 * @array:  a pointer to the first element in the array to search from
 * @size: the length of the array
 * @value: The value to search for.
 * Return: the index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t midpoint = (size / 2), i;
	int *tmpArray = array;

	if (array == NULL)
		return (-1);
	printf("Searching in array (midpoint = %ld): ", midpoint);
	for (i = 0; i < size; i++)
	{
		printf("%d", tmpArray[i]);
		if (i != size - 1)
			printf(", ");
		else
			printf("\n");
	}

	if (size == 0)
		return (-1);

	if (size == 1)
	{
		if (tmpArray[0] == value)
			return (0);
		else
			return (-1);
	}

	if (tmpArray[midpoint] == value)
	{
		return (midpoint);
	}
	else if (tmpArray[midpoint] > value)
	{
		size = midpoint - 1;
		return binary_search(tmpArray, size, value);
	}
	else if (tmpArray[midpoint] < value)
	{
		size = size - midpoint - 1;
		for (i = 0; i < size; i++)
		{
			midpoint++;
			tmpArray[i] = tmpArray[midpoint];
		}
		return (binary_search(tmpArray, size, value));
	}
	return (-1);
}
