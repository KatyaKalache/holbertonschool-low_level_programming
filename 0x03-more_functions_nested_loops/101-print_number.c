#include "holberton.h"

/**
 * print_number - print numbers with putchar
 * @n: numbers to be printed
 * Return: nothing
 */
void print_number(int n)
{
	int reversed;
	int mod;
	int copy;
	int whole;

	mod = n % 10;
	n = n / 10;
	reversed = n;
	copy = 1;
	whole = 0;

	while (reversed > 0)
	{
		whole = whole + 1;
		copy = copy * 10;
		reversed = reversed / 10;
	}
	copy = copy / 10;
	while (copy >= 1)
	{
		_putchar(n / copy + '0');
		n = n % copy;
		copy = copy / 10;
	}
	if (n < 0)
        {
                mod = mod * -1;
                _putchar('-');
        }
	_putchar('0' + mod);
}
