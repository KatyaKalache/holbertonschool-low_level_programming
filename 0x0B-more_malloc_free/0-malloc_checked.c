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
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}

	return (pointer);
}
