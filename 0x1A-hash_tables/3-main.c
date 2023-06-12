#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always EXIT_SUCCESS.
 *     */
int main(void)
{
	hash_table_t *ht;
	unsigned long idx;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "betty", "even cooler");
	hash_table_set(ht, "hetairas", "common");
	hash_table_set(ht, "mentioner", "available");
	idx = key_index((unsigned char *)"hetairas", ht->size);
	printf("Key:%s, Value:%s\n", ht->array[idx]->key, ht->array[idx]->value);
	if (ht->array[idx]->next != NULL)
		printf("Key:%s, Value:%s\n", ht->array[idx]->next->key, ht->array[idx]->next->value);
	return (EXIT_SUCCESS);
}
