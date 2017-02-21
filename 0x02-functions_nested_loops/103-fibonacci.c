#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: zero for success
 */
int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int num;
	int sum = 0;
	int c;
	int max = 4000000;

	num = num1 + num2;
	for (num = 0; num < max; num++)
	{
		if (num % 2 == 0)
			sum += num;
		num1 = num2;
		num2 = num;
	}
	printf("%d\n", sum);
	return (0);
}
