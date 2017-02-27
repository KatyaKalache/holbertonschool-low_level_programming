#include "holberton.h"

/**
 * print_number - print numbers with putchar
 * @n: numbers to be printed
 * Return: nothing
 */
void print_number(int n)
{
	int reversed;

	reversed = 0;
	while (n > 0)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}
	while (reversed > 0)
	{
		n = reversed % 10 + '0';
		_putchar(n);
		reversed /= 10;
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
