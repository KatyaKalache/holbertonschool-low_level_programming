#include "holberton.h"

/**
 * _isalpha - checks for alpha
 * @c: ascii value
 * Return: 1 for lowercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
	}
