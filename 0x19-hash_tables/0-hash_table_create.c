#include "hash_tables.h"
/**
 * hash_table_create - creates has table
 * @size: size of the array
 * Return: pointer to a new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

/* allocate table space */
	new_table = malloc(sizeof(hash_table_t));

	if (!new_table)
	{
		return (NULL);
	}

/* allocate head node pointers space */
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (!(new_table->array))
	{
		return (NULL);
	}
	while (i < size)
	{
		new_table->array[i] = NULL;
		i++;
	}
	new_table->size = size;

	return (new_table);
}
