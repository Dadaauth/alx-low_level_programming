#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_item_create - creates an item for the hash table
 * @head: the head of the list of items
 * NULL if there is no previous item there or collisions
 * @key: the key
 * @value: the value
 * Return: a pointer to the newly created item
 */
hash_node_t *hash_item_create(hash_node_t *head, const char *key, const char *value)
{
	hash_node_t *item = (hash_node_t *) malloc(sizeof(hash_node_t));

	item->key = (char *) malloc(strlen(key) + 1);
	item->value = (char *) malloc(strlen(value) + 1);

	strcpy(item->key, key);
	strcpy(item->value, value);
	item->next = head;

	return (item);
}
/**
 * free_item - frees an item in a hash table
 * @item: the item to free
 */
void free_item(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}
/**
 * free_table - frees a hash table
 * @ht: the hash table
 */
void free_table(hash_table_t *ht)
{
	unsigned long i = 0;
	hash_node_t *temp;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			while (ht->array[i] != NULL)
			{
				temp = ht->array[i]->next;
				free_item(ht->array[i]);
				ht->array[i] = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
/**
 * hash_table_set - adds an element to a hash table/ updates a hash table
 * @ht: the hash table to work on.
 * @key: the key for the new item
 * @value: the value of the new item
 * Return: 1 if successful 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, *temp;
	unsigned long idx;

	if (strcmp(key, "") == 0 || ht == NULL)/* check if key is an empty string */
		return (0);
	if (key == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
	{
		/* no item at the index, i.e no collisions */
		item = hash_item_create(NULL, key, value);
		ht->array[idx] = item;
	}
	else
	{
		/* collisions found */
		/* the first item is the key we are looking for */
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			free(ht->array[idx]->value);
			ht->array[idx]->value = malloc(strlen(value) + 1);
			strcpy(ht->array[idx]->value, value);
		}
		else
		{
			/**
			 * we need to transverse through
			 * the linked list to check if the
			 * key exists.
			 */
			temp = ht->array[idx];
			while (temp != NULL)
			{
				if (strcmp(temp->key, key) == 0)
				{
					free(temp->value);
					temp->value = malloc(strlen(value) + 1);
					strcpy(temp->value, value);
					return (1);
				}
				temp = temp->next;
			}
			item = hash_item_create(ht->array[idx], key, value);
			ht->array[idx] = item;
		}
	}
	return (1);
}
