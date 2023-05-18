#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the head of the linked list
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nofelements = 0;
	dlistint_t *temp = (dlistint_t *)h;

	while (temp != NULL)
	{
		nofelements++;
		temp = temp->next;
	}
	return (nofelements);
}
