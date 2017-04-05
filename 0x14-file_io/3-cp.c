#include "holberton.h"
#include  <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFFSIZE 1024
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
	char buf[BUFFSIZE];
	int write_to;
	int file_read;

	if (argc != 3)
	{
		exit(97);
	}

/* open file from */
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		exit(98);
/* open file to */
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_RDWR, S_IRUSR
		       | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
		exit (98);
/* read file_from to buffer */
	file_read = read(file_from, buf, BUFFSIZE);
	if (file_read == -1)
		exit(98);

/* write from buffer to file_to. file_read(size_t) -
   specifies the n of bytes read  */
	while (file_read > 0)
	{

		write_to = write(file_to, buf, file_read);

		if (write_to == -1)
			exit (99);
		file_read = read(file_from, buf, BUFFSIZE);
		if (file_read == -1)
			exit(99);
	}
	close(file_from);
	close(file_to);
	return (1);
}
