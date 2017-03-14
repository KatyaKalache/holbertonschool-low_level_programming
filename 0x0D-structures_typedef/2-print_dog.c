#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints
 * @d: description
 * Return: null or result
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("%s\n", d->name);
	if (d->age == '\0')
		printf("Age: (nil)");
	else
		printf("%f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("%s\n", d->owner);
}
