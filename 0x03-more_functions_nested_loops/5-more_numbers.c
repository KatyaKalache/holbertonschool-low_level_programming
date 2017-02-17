#include "holberton.h"

void more_numbers(void)
{
	int i;

		for(i = 0; i <= 14; i++)
		{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		}
	_putchar('\n');
}
