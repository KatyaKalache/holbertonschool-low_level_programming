#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
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

	if (!ht || !key)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	array_ptr = ht->array[index];

	if (index > (ht->size))
	{
		return (NULL);
	}

	while (array_ptr)
	{
		if (!(array_ptr->key) || !(array_ptr->value))
		{
			return (NULL);
		}
		else
			return (array_ptr->value);
	}
	return (NULL);
}
