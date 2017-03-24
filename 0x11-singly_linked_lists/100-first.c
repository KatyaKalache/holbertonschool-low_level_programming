#include <stdio.h>
/**
 * prior_main - executes before main
 *
 * Return: nothing
 */
void prior_main(void) __attribute__ ((constructor));
void prior_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
