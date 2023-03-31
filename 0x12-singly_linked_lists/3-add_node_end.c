#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - adds new nodes to the end of a linked list
 * @head: the beginning of the list
 * @str: string to init the new node struct with
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i, str_len = 0;
	list_t *temp = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	/**
	 * get length of string
	 */
	for (i = 0; str[i]; i++)
		str_len++;
	new->str = strdup(str);
	new->len = str_len;
	new->next = NULL;
	if (*head == NULL)
		(*head) = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
