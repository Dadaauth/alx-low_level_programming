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
 * hash_table_set - adds an element to a hash table/ updates a hash table
 * @ht: the hash table to work on.
 * @key: the key for the new item
 * @value: the value of the new item
 * Return: 1 if successful 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
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
		item = hash_item_create(ht->array[idx], key, value);
		ht->array[idx] = item;
	}
	return (1);
}
