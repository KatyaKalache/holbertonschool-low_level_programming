#include "holberton.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int letters_read;
	int letters_written;

	buf = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);

	if (buf == NULL)
	{
		return (0);
	}
	if (fd == -1)
	{
		return (0);
	}
	if (filename == NULL)
	{
		close(fd);
		return (0);
	}
	letters_read = read(fd, buf, letters);
	letters_written = write(STDOUT_FILENO, buf, letters_read);
	if (letters_read == -1)
	{
		free(buf);
		return (0);
	}
	if (letters_written == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (letters_written);
}
