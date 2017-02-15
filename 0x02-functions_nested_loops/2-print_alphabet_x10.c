#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j = 'a';

	while ( i  <= 10 )
	{
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
	
		i++;
	}
}
