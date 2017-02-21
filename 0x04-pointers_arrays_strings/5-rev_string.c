#include "holberton.h"

/**
 * _strlen - returns length of a string
 * @s: value to be checked
 * Return: length
 */
void rev_string(char *s)
{
	while (*s)
		_putchar(*s);
	s++;
}
