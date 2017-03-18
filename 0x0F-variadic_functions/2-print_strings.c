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
	char *ptr;

	va_start(param, n);
	for (i = 0; i < n; i++)
	{
	ptr = va_arg(param, char *);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", ptr);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(param);
}
