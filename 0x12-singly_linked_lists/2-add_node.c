#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - ads new nodes to a linked list
 * @head: a pointer to the start of the list
 * @str: the string to add to the list
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i, str_len = 0;

	/**
	 * get length of string
	 */
	if (str != NULL)
	{	
		for (i = 0; str[i]; i++)
			str_len++;
		new = malloc(sizeof(list_t));
		if (new == NULL)
		{
			free(new);
			return (NULL);
		}
		new->str = strdup(str);
		new->len = str_len;
		new->next = *head;
		*head = new;
	}
	return (new);
}
