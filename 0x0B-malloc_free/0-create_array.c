#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of strings
 * and initializes it with a specific char
 * @size: the size in bytes of the memory to reserve
 * @c: the character to initialize the array with
 * Return: a pointer to the address of the array,
 * NULL if size is zero or if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
