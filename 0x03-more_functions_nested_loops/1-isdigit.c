#include "holberton.h"

/**
 * _isupper  - checks for upper case
 * @c: the value to be cheched
 * Return: 1 if it's digit, 0 if alpha
 */
int _isdigit(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}
