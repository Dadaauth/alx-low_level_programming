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
		if (sizeof(*(int *)p2) == sizeof(int))
			*((int *)p1 + i) = *((int *)p2 + i);
		else if (sizeof(*(char *)p2) == sizeof(char))
			*((char *)p1 + i) = *((char *)p2 + i);
		else if (sizeof(*(float *)p2) == sizeof(float))
			*((float *)p1 + i) = *((float *)p2 + i);
		else if (sizeof(*(double *)p2) == sizeof(double))
			*((double *)p1 + i) = *((double *)p2 + i);
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
	if (ptr == NULL && new_size == 0)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		printf("I want to return NULL\n");
		return (NULL);
	}

	if (new_size < old_size)
		size = new_size;
	else
		size = old_size;

	p = malloc(old_size);
	copymem_con(p, ptr, size);
	ptr = malloc(new_size);
	copymem_con(ptr, p, size);
	return (ptr);
}
