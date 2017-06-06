#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the table
 * @key: index where to add
 * @value: value to be added
 * Return: 1 for success, 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *array_ptr, *new_node;
	unsigned long int index;

	if (!ht || !key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	array_ptr = ht->array[index];
	while (array_ptr)
	{
		if (strcmp(key, array_ptr->key) == 0)
		{
			free(array_ptr->value);
			array_ptr->value = strdup(value);
			return (1);
		}
		array_ptr = array_ptr->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!(new_node->key))
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!(new_node->value))
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = (ht->array[index]);
	ht->array[index] = new_node;
	return (1);
}
