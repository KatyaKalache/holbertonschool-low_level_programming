#include "holberton.h"
#include  <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * main - copies one file to another
 * @argc: number of arguments passed
 * @argv: arguments
 * Return: 0 for success
 */
int main(int argc, char **argv[])
{
	int file_from;
	int file_to;

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
	return (0);
}
