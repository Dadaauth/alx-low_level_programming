#include <stdio.h>
#include "hash_tables.h"
/**
 * check - checks if there are any other available items
 * @ht: the hash table
 * @start: where to start iteration
 * Return: 0 if there are any, 1 otherwise
 */
int check(hash_table_t *ht, unsigned long start)
{
	unsigned long i = 0;
	hash_node_t *item;

	for (i = start; i < ht->size; i++)
	{
		item = ht->array[i];
		if (item != NULL)
		{
			/* there are other elements */
			return (0);
		}
	}
	return (1);
}
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_table_t *temp = (hash_table_t *) ht;
	hash_node_t *item;
	unsigned long i = 0;

	if (temp == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");

	for (i = 0; i < temp->size; i++)
	{
		item = temp->array[i];
		if (item != NULL)
		{
			if (item->next == NULL)
				printf("'%s': '%s'", item->key, item->value);
			else
			{
				while (item != NULL)
				{
					printf("'%s': '%s'", item->key, item->value);
					if (item->next != NULL)
						printf(", ");
					item = item->next;
				}
			}
			if (check(temp, i + 1) == 0)
				printf(", ");
		}
	}

	printf("}\n");
}
