#include <stdio.h>
#include <string.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - prints the result of math operations
 * @num1: first number passed
 * @num2: second number passed
 * Return: result
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
