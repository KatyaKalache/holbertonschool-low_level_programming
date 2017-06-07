#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *array_ptr;
	unsigned long int i = 0;
	unsigned long int count;
	hash_node_t *temp;

	if (!ht)
		return;

	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp)
		{
			count = i;
			temp = temp->next;
		}
		i++;
	}

	i = 0;
	printf("{");
	while (i < ht->size)
	{
		array_ptr = ht->array[i];
		while (array_ptr)
		{
			printf("'%s': '%s'", array_ptr->key, array_ptr->value);
			if (i != count)
				printf(", ");
			array_ptr = array_ptr->next;
		}
		i++;
	}
	printf("}\n");
}
