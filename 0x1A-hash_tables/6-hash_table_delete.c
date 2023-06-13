#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht:
 */
void hash_table_delete(hash_table_t *ht)
{
	free_table(ht);
}
