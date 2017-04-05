#include "holberton.h"
#include  <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * _strlen - finds string length
 * @s: a string
 * Return: string length
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}
/**
 * main - copies one file to another
 * @argc: number of arguments passed
 * @argv: arguments
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	int file_from;
	int file_to;
	char *buf[1024];
	int write_to;
	int length;

	buf = malloc(sizeof(char) * buf);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		return(-1);

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);

	length = _strlen(text_content);

	write_to = write(file_from, text_content, length);

	if (write_to == -1)
		return (-1);
	close(file_from);
	return (1);
}
