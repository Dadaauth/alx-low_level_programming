#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - frees all malloc'ed memory in a linked
 * list structure
 * @head: the head of the linked list
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *temp = head, *prev = NULL;

	while (temp != NULL)
	{
		prev = temp->next;
		free(temp->str);
		free(temp);
		temp = prev;
	}
}
