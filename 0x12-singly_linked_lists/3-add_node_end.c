#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * lenOfStr -  returns te length of a string
 * @str: the string to work on
 * Return: the amount of characters present in the string
 * apart from the null character (\0);
 */
size_t lenOfStr(char *str)
{
	int i;
	size_t len = 0;

	for (i = 0; str[i]; i++)
		len++;
	return (len);
}
/**
 * add_node_end - adds a new node to the end
 * of a linked list
 * @head: the head of the list
 * @str: the data for the new node
 * Return: address of the new element,
 * or NULL if failure is experienced.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *temp = *head;

	if (head == NULL || str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = lenOfStr((char *)str);
	new->next = NULL;
	if (temp == NULL)
		(*head) = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}
