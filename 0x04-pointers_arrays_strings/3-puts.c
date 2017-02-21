#include "holberton.h"

/**
 * _puts - prints a string
 * @str: value to be checked
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
