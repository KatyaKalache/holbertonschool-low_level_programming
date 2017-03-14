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
	{
		return;
	}
	if (d->name == NULL)
	{
	printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %0.1f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
