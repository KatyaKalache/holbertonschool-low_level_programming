#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search - searches for a value using Binary search algorithm
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: return the value for success, -1 for failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first = 0;
	size_t last = size - 1;
	size_t middle;

	while (first <= last && array != NULL)
	{
		printf("Searching in array: %lu", i);
		middle = (first + last) / 2;
		if (array[middle] == value)
		{
			return (middle);
			printf("%d found at %lu\n", value, middle + 1);
		}
		else if (array[middle] > value)
			last = middle - 1;
		else if (array[middle] < value)
			first = middle + 1;
	}
	return (-1);
}
