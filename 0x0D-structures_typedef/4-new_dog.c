#include "dog.h"
#include <stdlib.h>
/**
 * _str_len - string length
 * @s: string passed
 * Return: int
 */
int _str_len(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
/**
 * _strcpy - copies string pointed to
 * @dest: where to
 * @src: where from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 * Return: null or result
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_struct;
	unsigned int owner_len;
	unsigned int name_len;

	new_struct = malloc(sizeof(dog_t));
	if (new_struct == NULL)
		return (NULL);
	if (owner != NULL)
	{
		owner_len = _str_len(owner);
	new_struct->owner = malloc(sizeof(char) * owner_len);
	if (new_struct->owner == NULL)
	{
		free(new_struct);
		return (NULL);
	}
	_strcpy(new_struct->owner, owner);
	}
	if (name != NULL)
	{
		name_len = _str_len(name);
		new_struct->name = malloc(sizeof(char) * name_len);
	if (new_struct->name == NULL)
	{
		free(new_struct->owner);
		free(new_struct);
		return (NULL);
	}
	_strcpy(new_struct->name, name);
	}
	new_struct->age = age;
	return (new_struct);
}
