#include "holberton.h"
/**
 * clear_bit - sets value to 0 at given position
 * @n: number
 * @index: the position
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size;

	size = sizeof(unsigned long int) * 8;

	if (index < size - 1)
	{
		*n = *n & (~(1 << index));
	}
	return (1);
}
