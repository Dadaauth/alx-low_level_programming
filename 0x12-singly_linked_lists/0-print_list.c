#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the element of a linked list
 * @h: the list to print
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nOfNodes = 0;
	const list_t *temp = h;

	if (h == NULL)
		return (0);
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", temp->len, temp->str);
		temp = temp->next;
		nOfNodes++;
	}
	return (nOfNodes);
}
