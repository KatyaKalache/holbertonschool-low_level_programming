#include "holberton.h"

/**
 * jack_bauer - checks for alpha
 *
 * Return: 1 for lowercase
 */
void jack_bauer(void)
{
	char hour;
	char min;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
				_putchar(':');
				_putchar(min / 10 + '0');
				_putchar(min % 10 + '0');
				_putchar('\n');
		}
	}
}
