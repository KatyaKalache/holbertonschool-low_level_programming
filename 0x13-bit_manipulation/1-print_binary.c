#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - converts decimal to binary
 * @n: number to be converted
 * Return:
 */
void print_binary(unsigned long int n)
{
	unsigned int i;
	unsigned long int shifted;
	char *leading;
	unsigned int byte_size = sizeof(unsigned long int) * 8;

	for (i = 0; i < byte_size; i++)
	{
		shifted = n << 1;
		if (shifted != n)
		{
			_putchar('1');
			leading = 0;
		}
		else if (!leading)
		{
			_putchar ('0');
		}
		shifted = shifted >> 1;
	}
}
