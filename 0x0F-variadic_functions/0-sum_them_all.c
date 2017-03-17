#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all parameteres
 * @n: number parameteres passed
 * Returns: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list param;
	int sum = 0;
	unsigned int i;

	va_start(param, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(param, unsigned int);
	}
	va_end(param);
	return (sum);
}
