#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string
 * Return: the string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s = s + 1);
	_putchar(*s);
}
