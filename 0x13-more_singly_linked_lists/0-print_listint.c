#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to the first element of that list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *temp = (listint_t *)h;
	size_t n_of_nodes = 0;

	if (h == NULL)
		return (0);
	while (temp->next != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		n_of_nodes++;
	}
	printf("%d", temp->n);
	n_of_nodes++;
	return (n_of_nodes);
}
