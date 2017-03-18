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
	char datatype;
	char *strcopy;

	va_start(param, format);
	while (datatype != '\0' && format != NULL)
	{
	datatype = format[i];
		if (datatype == 'c')
		{
			printf("%c", va_arg(param, int));
		}
		else if (datatype == 'i')
		{
			printf("%d", va_arg(param, int));
		}
		else if (datatype == 's')
		{
			strcopy = va_arg(param, char*);
			if (strcopy != NULL)
			{
				printf("%s", strcopy);
			}
			else
			{
				printf("(nil)");
			}
		}
		else if (datatype == 'f')
		{
			printf("%f", va_arg(param, double));
		}
		printf(", ");
		i++;
	}
	printf("\n");
	va_end(param);
}
