#include <stdlib.h>
/**
 * print_name - prints name using function pointer
 * @name: name location
 * @f: function pointed to
 * Return: anything
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	(*f)(name);
}
