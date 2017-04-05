#include "holberton.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * create_file - creates a file
 * @filename: pointer to the file to be created
 * @text_content: terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int write_to_file;

	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (filename == NULL)
	{
		return (-1);
	}

	write_to_file = write(fd, text_content, 8);

	if (write_to_file == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
