#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: zero for success
 */
int main(void)
{
	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long num;
	unsigned long sum = 0;
	int c;
	unsigned long max = 4000000;

	num = num1 + num2;
	for (num = 0; num < max; num++)
	{
		if (num % 2 == 0)
			sum += num;
		num1 = num2;
		num2 = num;
	}
	printf("%lu\n", sum);
	return (0);
}
