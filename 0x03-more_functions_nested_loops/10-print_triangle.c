#include "holberton.h"

/**
 * print_triangle - printing triangle shape of #
 * @size: value to be checked
 * Return: nothing
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j < size - i)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
