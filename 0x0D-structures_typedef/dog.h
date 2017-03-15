#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines type
 * @name: dog name
 * @age: age
 * @owner: dogs owner
 * Description: d
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _str_len(char *s);
#endif
