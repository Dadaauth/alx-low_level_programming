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
 * add_node - adds a new node at the beginning of a linked list
 * @head: the beginning of the list
 * @str: data for the list
 * Return: address of the nw element, or NULL if it failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	size_t strlen;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	strlen = lenOfStr((char *)str);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen;
	if (*head != NULL)
		new->next = (*head);
	else
		new->next = NULL;
	*head = new;

	return (new);
}
