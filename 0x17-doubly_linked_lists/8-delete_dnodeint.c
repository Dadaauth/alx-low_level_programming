#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the head of the list
 * @index: the index of the node, starting from 0.
 * Return: a pointer to the node. If the node doesn't exist, returns NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: the head of the list
 * @index: the index to delete
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delNode;

	delNode = get_dnodeint_at_index(*head, index);
	if (delNode == NULL)
		return (-1);
	if (delNode->prev != NULL)
	{
		delNode->prev->next = delNode->next;
		if (delNode->next != NULL)
			delNode->next->prev = delNode->prev;
	}
	else
	{
		*head = delNode->next;
		if (delNode->next != NULL)
			delNode->next->prev = NULL;
	}
	free(delNode);
	return (1);
}
