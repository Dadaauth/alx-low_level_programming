#include "lists.h"
#include <stdio.h>
#include <stdbool.h>
/**
 * print_list - prints the elements of a linked list
 * @h: the list to print
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *current = (list_t *) h;
	unsigned int node_count = 0;
	bool continue_loop = true;

	if (current != NULL)
	{
		while (continue_loop)
		{
			if (current->str == NULL)
				printf("[0] (nil)");
			else
			{
				printf("[%u] %s", current->len, current->str);
			}
			node_count++;
			if (current->next == NULL)
				continue_loop = false;
			else
			{
				current = current->next;
				printf("\n");
			}
		}
	/**
	 * You can also check if the next structure has
	 * a NULL pointer so you stop the loop then print
	 * the next structure contents after the loop
	 */
	printf("\n");
	}
	return (node_count);
}
