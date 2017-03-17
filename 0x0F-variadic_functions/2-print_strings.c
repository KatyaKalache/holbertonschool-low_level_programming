#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_strings - prints strings
 * @separator: separates strings
 * @n: number of parameters passed
 * Return: strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}
	if (param == NULL)
	{
		printf("(nil)");
	}
	va_start(param, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%s", va_arg(param, char *));
		printf("%s", separator);
	}
	printf("%s\n", va_arg(param, char *));
	va_end(param);
}
