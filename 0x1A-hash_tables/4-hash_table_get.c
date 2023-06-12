#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - gets the value associated with a key.
 * @ht: the table to look into
 * @key: the key
 * Return: the value associated with key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value = NULL;
	hash_node_t *temp;
	unsigned long idx;

	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
	{
		/* the index is empty */
		return (NULL);
	}
	if (strcmp(ht->array[idx]->key, key) == 0)
	{
		/* the item is the first in the linked list */
		value = ht->array[idx]->value;
	}
	else
	{
		/**
		 * there is a collision in this index so we have to
		 * transverse through the linked list
		 */
		temp = ht->array[idx];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				value = temp->value;
				break;
			}
			temp = temp->next;
		}
	}

	return (value);
}
