#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of ints
 * @min: min value
 * @max: max value
 * Return: the pointer to the array
 */
int *array_range(int min, int max)
{
	int *array;
	int i = 0;
	int dif;

	dif = max - min + 1;
	if (min > max)
	{
		return (NULL);
	}
	array = malloc(dif * sizeof(int));
	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
