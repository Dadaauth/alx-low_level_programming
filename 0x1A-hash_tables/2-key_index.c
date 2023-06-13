#include <stdio.h>
#include "hash_tables.h"
/**
 * key_index - returns the index a key should be stored
 * in a hash table
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2((unsigned char *)key);

	return (hash % size);
}
