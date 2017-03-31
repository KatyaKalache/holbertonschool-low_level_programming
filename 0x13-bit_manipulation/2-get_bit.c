#include "holberton.h"
/**
 * get_bit - returns the value of index at given index
 * @n: number
 * @index: the position
 * Return: the byte
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size;

	size = sizeof(unsigned long int) * 8;
	n = n >> index;

	if (n == 0)
		return (0);
	if (index > size)
		return (-1);
	if (((n >> 1) << 1) == n)
		return (0);
	else
		return (1);
}
