#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements passed to an array
 * @size: size of array
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	if (nmemb == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * sizeof(char));
	if (i < size)
	{
		while (i < size)
		{
			array[i] = nmemb;
			i++;
		}
		return (array);
	}
	else
		return (0);
}
