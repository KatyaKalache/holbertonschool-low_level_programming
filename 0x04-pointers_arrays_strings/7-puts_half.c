#include "holberton.h"

/**
 * _strlen - gets the length
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
/**
 * puts_half - returns length of a string
 * @str: value to be checked
 * Return: half length
 */
void puts_half(char *str)
{
	int i = _strlen(str) + 1;
	int j = i / 2;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
