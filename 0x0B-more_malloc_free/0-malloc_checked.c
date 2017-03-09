#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - chekcing if enough space for passed b
 * @b: value checked
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *pointer;

	pointer = malloc(b);
	if (pointer == NULL && b < sizeof(unsigned int))
	{
		exit(98);
	}

	return (pointer);
}
