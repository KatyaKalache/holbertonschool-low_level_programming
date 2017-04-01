#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - converts decimal to binary
 * @n: number to be converted
 * Return:
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int shifted;
	unsigned int flag;
	int byte_size = sizeof(unsigned long int) * 8 - 1;

	flag = 0;

	if (n == 0)
	{
		_putchar ('0');
	}

	for (i = byte_size; i >= 0; i--)
	{
		shifted = n >> i;
		if (shifted & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (!(shifted & 1) && (flag == 1))
		{
			_putchar ('0');
		}
	}
}
