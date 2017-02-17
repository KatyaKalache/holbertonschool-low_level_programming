#include "holberton.h"

/**
 * print_square - printing square shape of #
 * @size: value to be checked
 * Return: nothing
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
