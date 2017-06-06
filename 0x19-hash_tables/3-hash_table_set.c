#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the table
 * @key: index where to add
 * @value: value to be added
 * Return: 1 for success, 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *array_ptr;
	hash_node_t *new_node;
	unsigned long int index;

	if (!ht || !key || !value)
	{
		return (0);
	}
/* hashing the index */
	index = key_index((const unsigned char *)key, ht->size);
/* set head to the index of the array */
	array_ptr = ht->array[index];
/* check if key exists in the list array_ptr is pointing to */
	while (array_ptr)
	{
		if (strcmp(key, array_ptr->key) == 0)
		{
			free(array_ptr->value);
			array_ptr->value = strdup(value);
			array_ptr->next = array_ptr;
			return (1);
		}
		else
		{
			new_node = malloc(sizeof(hash_node_t));
			if(!new_node)
			{
				return (0);
			}
			new_node->key = strdup(key);
			if (!(new_node->key))
				return (0);
			new_node->value = strdup(value);
			if (!(new_node->value))
				return (0);
		}
	}
	return (1);
}
