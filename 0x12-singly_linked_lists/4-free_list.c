#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * free_list - frees a singly linked list
 * @head: start of the list to free
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *temp2;

	if (head != NULL)
	{
		while (temp->next != NULL)
		{
			temp2 = temp;
			free(temp);
			temp = temp2->next;
		}
		free(temp);
	}
}
