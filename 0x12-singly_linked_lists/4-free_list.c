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
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
