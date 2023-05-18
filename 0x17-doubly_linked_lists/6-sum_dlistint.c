#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data(n) of a linked list.
 * @head: the head of the list
 * Return: the sum of all the data (n) in the list; or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
