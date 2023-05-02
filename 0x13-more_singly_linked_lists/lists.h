#ifndef LIST_H
#define LIST_H

#include <stddef.h>

/**
 * struct listint_s - the defined structure to use for this particular project
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s listint_t;
struct listint_s
{
	int n;
	listint_t *next;
};

int _putchar(char c);

size_t print_listint(const listint_t *h);

size_t listint_len(const listint_t *h);

listint_t *add_nodeint(listint_t **head, const int n);

listint_t *add_nodeint_end(listint_t **head, const int n);

void free_listint(listint_t *head);

#endif
