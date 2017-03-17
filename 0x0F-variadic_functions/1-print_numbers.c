#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: string printed between numbers
 * @n: number of parameteres
 * Return: result
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int i;

	va_start(param, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(param, int));
		printf("%s", separator);
	}
	printf("%d\n", va_arg(param, int));
	va_end(param);
}
