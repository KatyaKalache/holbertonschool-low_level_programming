#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints parameteres of any type
 * @format: list of type of var
 * Return: anything
 */
void print_all(const char * const format, ...)
 {
	va_list param;
	int i;

	va_start(param, format);
	for (i = 0; i < *format; i++)
	{
	if (* format == 'c')
	{
		printf("%c", va_arg(param, int));
	}
	else if (* format == 'i')
	{
		printf("%d", va_arg(param, int));
	}
	}
	printf("\n");
	va_end(param);
}
