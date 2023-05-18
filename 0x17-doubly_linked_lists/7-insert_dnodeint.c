#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the head of the list
 * @index: the index of the node, starting from 0.
 * Return: a pointer to the node. If the node doesn't exist, retyurns NULL.
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
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the head of the linked list
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nofelements = 0;
	dlistint_t *temp = (dlistint_t *)h;

	while (temp != NULL)
	{
		nofelements++;
		temp = temp->next;
	}
	return (nofelements);
}
/**
 * insert_dnodeint_at_index - inserts a new node at an index in a linked list.
 * @h: the head of the list.
 * @idx: the index of the list to add the node.
 * @n: the data of the new node.
 * Return: the address of the new node or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *nodePtr, *new;
	size_t nodeCount;

	if (h == NULL)
		return (NULL);
	nodePtr = get_dnodeint_at_index(*h, idx);
	nodeCount = dlistint_len(*h);
	if (nodePtr == NULL && idx != nodeCount)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == nodeCount)
	{
		if (temp == NULL)
		{
			new->prev = temp;
			new->next = NULL;
			*h = new;
			return (new);
		}
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		new->prev = temp;
		new->next = NULL;
		temp->next = new;
		return (new);
	}
	new->prev = nodePtr->prev;
	new->next = nodePtr;
	nodePtr->prev->next = new;
	nodePtr->prev = new;
	return (new);
}
