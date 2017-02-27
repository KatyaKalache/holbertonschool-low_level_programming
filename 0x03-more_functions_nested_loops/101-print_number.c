#include "holberton.h"

/**
 * print_number - print numbers with putchar
 * @n: numbers to be printed
 * Return: nothing
 */
void print_number(int n)
{
	if (n > 0)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
