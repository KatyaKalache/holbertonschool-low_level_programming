#include "holberton.h"

/**
 * _strlen - returns length of a string
 * @s: value to be checked
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
 * rev_string - reversing the string
 * @s: string value
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int l = _strlen(s) - 1;
	int temp;

	while (i < l)
	{
		temp = s[i];
		s[i] = s[l];
		s[l] = temp;
	i++;
	l--;
	}
}
