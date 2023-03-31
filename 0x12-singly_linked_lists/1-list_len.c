#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: the linked list
 * Return: the number of elements in linked list h
 */
size_t list_len(const list_t *h)
{
	size_t list_len = 0;

	if (h != NULL)
	{
		list_len = 1;
		list_t *temp = (list_t *) h;

		while (temp->next != NULL)
		{
			list_len++;
			temp = temp->next;
		}
	}
	return (list_len);
}
