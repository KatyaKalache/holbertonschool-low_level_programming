#include "holberton.h"

/**
 * more_numbers - prints numbers from 0 to 14
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}
