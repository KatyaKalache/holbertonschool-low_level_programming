#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints a string
 * @a: value to be checked
 * @n: number of elements of the array to print
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < 4)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
