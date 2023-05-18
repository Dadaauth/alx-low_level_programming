#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees memory for a dlistint linked list
 * @head: the head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
