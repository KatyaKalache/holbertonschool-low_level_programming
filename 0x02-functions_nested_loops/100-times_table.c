#include "holberton.h"

/**
 * print_times_table  - prints n times table
 * @n: value to be checked
 * Return: nothing
 */
void print_times_table(int n)
{
	int i;
	int j;
	int x;

	for (i = 0; i <= n; i++)
	{
		if (n > 15 || n < 0)
		{ break; }
		for (j = 0; j <= n; j++)
		{
			x = i * j;
			if (j == 0)
			{ _putchar('0'); }
			if (x <= 9 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(x % 10 + '0');
			}
			else if (x > 9 && x < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			else if (x > 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(x / 100 + '0');
				_putchar(x / 10 % 10 + '0');
				_putchar(x % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
