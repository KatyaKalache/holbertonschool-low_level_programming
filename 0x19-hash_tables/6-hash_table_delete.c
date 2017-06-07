#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *array_ptr;

	if (!ht)
		return;

	while (i < ht->size)
	{
		array_ptr = ht->array[i];
		while (array_ptr)
		{
			free(array_ptr->value);
			free(array_ptr->key);
			free(array_ptr);
			array_ptr = array_ptr->next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
