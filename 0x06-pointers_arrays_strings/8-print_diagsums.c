#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: array
 * @size: size of int
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum1 = 0;

	for (i = 0; i < (size * size); i += (size + 1))
	{
		sum = sum + a[i];
	}
	for (i = (size - 1); i < ((size * size) - 1); i += (size - 1))
	{
		sum1 = sum1 + a[i];
	}
	printf("%d, %d\n", sum, sum1);
}
