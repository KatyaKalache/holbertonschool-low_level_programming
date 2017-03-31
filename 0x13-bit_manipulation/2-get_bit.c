#include "holberton.h"
/**
 * get_bit - returns the value of index at given index
 * @n: number
 * @index: the position
 * Return: the byte
 */

int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;

	if (((n >> 1) << 1) == n)
		return (0);
	else
		return (1);
}
