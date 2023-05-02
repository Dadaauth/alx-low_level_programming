#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list.
 * @h: the linked list to work on
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t nOfNodes = 0;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		temp = temp->next;
		nOfNodes++;
	}
	return (nOfNodes);
}
