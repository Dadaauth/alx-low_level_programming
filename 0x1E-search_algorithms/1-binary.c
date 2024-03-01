#include <stdio.h>
#include <stdbool.h>
void print_array(int *arr, size_t size);
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
	size_t midpoint, start = 0, stop = size - 1, newsize = size;
	int *tmpArr = array;

	if (tmpArr == NULL || size == 0)
		return (-1);

	while (true)
	{
		if (start == stop)
		{
			if (tmpArr[start] == value)
				return (start);
			else
				return (-1);
		}
		newsize = (stop - start) + 1;
		midpoint = newsize / 2;
		midpoint--;
		if ((newsize % 2) != 0)
		{
			midpoint++;
		}
		midpoint += start;

		print_array(tmpArr + start, newsize);

		if (tmpArr[midpoint] == value)
			return (midpoint);
		else if (tmpArr[midpoint] > value)
		{
			stop = midpoint - 1;
			continue;
		}
		else if (tmpArr[midpoint] < value)
		{
			start = midpoint + 1;
			continue;
		}
	}

	return (-1);
}

/**
 * print_array - prints an array of integers
 * @arr: the array to print
 * @size: the size of the array to print
 * Return: Nothing
 */
void print_array(int *arr, size_t size)
{
	size_t i;

	if (arr == NULL)
		return;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
		if (i < (size - 1))
			printf(", ");
		else
			printf("\n");
	}
}
