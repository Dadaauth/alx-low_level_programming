#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - gets the number of nodes in a linked list
 * @h: a pointer to the first element in the linked list
 * Return: the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	listint_t *temp = (listint_t *)h;
	size_t n_of_nodes = 0;

	if (h == NULL)
		return (0);
	while (temp->next != NULL)
	{
		n_of_nodes++;
		temp = temp->next;
	}
	n_of_nodes++;
	return (n_of_nodes);
}
