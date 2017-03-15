#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for integer
 * @array: array to be checked
 * @size: size of the array
 * @cmp: pointer to a function that compares values
 * Return: result
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size != 0 || cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
