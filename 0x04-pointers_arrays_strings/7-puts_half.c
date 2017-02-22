#include "holberton.h"

/**
 * puts_half - returns length of a string
 * @str: value to be checked
 * Return: length
 */
void puts_half(char *str)
{
	while (*str != '\0')
	{
		_putchar(*(str+5));
		str++;
	}
	_putchar('\n');
}
