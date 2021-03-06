#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hast table
 * @key: key value
 * Return: value at the index
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *array_ptr;
	unsigned long int index;
	unsigned long int i = 0;

	if (!ht || !key)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	array_ptr = ht->array[index];

	while (i < ht->size)
	{
/* while there is value at index */
		while (array_ptr)
		{
			if (strcmp(key, array_ptr->key) == 0)
				return (array_ptr->value);
			array_ptr = array_ptr->next;
		}
		i++;
	}
	return (NULL);
}
