#include "holberton.h"
#include <stdio.h>
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_exists(argv[1], argv[2]);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		read_error(argv[1]);
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR
		       | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
		write_error(argv[2]);
	file_read = read(file_from, buf, BUFFSIZE);
	if (file_read == -1)
		read_error(argv[1]);
	while (file_read > 0)
	{
		write_to = write(file_to, buf, file_read);
		if (write_to == -1)
			write_error(argv[2]);
		file_read = read(file_from, buf, BUFFSIZE);
		if (file_read == -1)
			read_error(argv[1]);
	}
	close(file_from);
	if ((close(file_from)) == -1)
		close_error(file_from);
	close(file_to);
	if ((close(file_to)) == -1)
		close_error(file_to);
	return (0);
}
/**
 * read_error - prints error if failed to read file
 * @file_read: file to be open and read
 * Return: nothing
 */
void read_error(char *file_read)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_read);
	exit(98);
}
/**
 * write_error - prints error of failed to write to the file
 * @write_file: file to be written to
 * Return: nothing
 */
void write_error(char *write_file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", write_file);
	exit(99);
}
/**
 * close_error - prints error message of failed to close fds
 * @fd: file descriptors to be close
 * Return: Nothing
 */
void close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * file_exists - checks if files exist
 * @argv1: first argument passed
 * @argv2: second argument passed
 * Return: nothing
 */
void file_exists(char *argv1, char *argv2)
{
	if (argv1 == NULL)
		read_error(argv1);
	if (argv2 == NULL)
		write_error(argv2);
}
