#include "holberton.h"

/**
 * print_last_digit - checks for alpha
 * @i: the value to be checked
 * Return: last digit of i
 */
int print_last_digit(int i)
{
	if (i < 0)
	{
		_putchar(((i *= -1) % 10) + '0');

	}
	else
	{
		_putchar((i % 10) + '0');
	}
	return (i % 10);
}
