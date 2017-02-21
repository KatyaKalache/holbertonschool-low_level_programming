#include "holberton.h"

/**
 * puts2 - prints a string
 * @str: value to be checked
 * Return: nothing
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}
