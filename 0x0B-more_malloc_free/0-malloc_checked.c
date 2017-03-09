#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL && b < sizeof(unsigned int))
	{
		exit(98);
	}

	return (pointer);
}
