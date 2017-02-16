#include "holberton.h"

/**
 * print_sign - checks negative and positive numbers
 * @n: the number to be checked
 * Return: 1 and + for positive, zero for 0, -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
