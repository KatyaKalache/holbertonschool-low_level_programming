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
	int i = 0;
	char *strcopy;
	int success;

	va_start(param, format);
	while (format && format[i])
	{
		success = 1;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(param, int));
			break;
		case 'i':
			printf("%d", va_arg(param, int));
			break;
		case 's':
			strcopy = va_arg(param, char*);
			if (strcopy == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", strcopy);
			break;
		case 'f':
			printf("%f", va_arg(param, double));
			break;
		default:
			success = 0;
			break;
		}
		if (format[i + 1] && success == 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(param);
}
