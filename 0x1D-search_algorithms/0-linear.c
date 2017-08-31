#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - searches for a value using the Linear search algorithm
 * @array: array to be search in
 * @size: size of the array
 * @value: value to be searched
 * Return: value for success, -1 for failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size && array != NULL)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
