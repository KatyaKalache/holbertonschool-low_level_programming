#include "holberton.h"

/**
 * puts_half - returns length of a string
 * _strlen - gets the length
 * @str: value to be checked
 * @s:checking the length
 * Return: length
 */

int _strlen(char *s)
{
	int l = 0;

	while (*(s + l))
		l++;
	return (l);
}

void puts_half(char *str)
{
	int i = _strlen(str);
	int j = i / 2;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
