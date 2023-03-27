#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * copymem_con - copies the content of one memory to another
 * NOTE:: This function frees the p2(the memory to copy from)
 * after it has copied successfully
 * @p1: the first pointer (the copier)
 * @p2: the second pointer (the copied)
 * @size: the size to copy
 * Return: nothing
 */
void copymem_con(void *p1, void *p2, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		*((char *)p1 + i) = *((char *)p2 + i);
	}
	free(p2);
}
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory area to free
 * @old_size: the previous size of the memory area
 * @new_size: the new size of the memory area
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int size;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size < old_size)
		size = new_size;
	else
		size = old_size;

	p = malloc(new_size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	copymem_con(p, ptr, size);
	ptr = p;
	return (ptr);
}
