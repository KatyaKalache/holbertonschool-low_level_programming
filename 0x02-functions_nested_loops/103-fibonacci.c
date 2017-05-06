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
	unsigned int reassign;
	unsigned long sum = 0;
	unsigned long max = 4000000;

	while (num1 < max)
	{
		if (num1 % 2 == 0)
		{
			sum = sum + num1;
		}
		reassign = num2;
		num2 = num1 + num2;
		num1 = reassign;
	}
	printf("%lu\n", sum);
	return (0);
}
