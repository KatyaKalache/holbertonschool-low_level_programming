#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *array_ptr;
	unsigned long int i = 0;

	while (i < ht->size)
	{
		array_ptr = ht->array[i];
		while (array_ptr)
		{
			printf("%s\n", array_ptr->value);
			array_ptr = array_ptr->next;
		}
		i++;
	}
}
