#include "holberton.h"

/**
 * print_most_numbers - computes the absolute value
 *
 * Return: result
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
	if (n == 2 || n == 4)
	{ continue; }
	_putchar(n + '0');
	}
	_putchar('\n');
}
