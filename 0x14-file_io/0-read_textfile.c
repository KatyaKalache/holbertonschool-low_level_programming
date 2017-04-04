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

	if (!fd)
	{
		close(fd);
		return (0);
	}
	if (filename == NULL)
	{
		close(fd);
		return(0);
	}

	buf = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);
	letters_read = read(fd, buf, letters);
	letters_written = write(STDOUT_FILENO, buf, letters_read);
	if (!letters_written)
	{
		close (fd);
		return (0);
	}
	if (letters_read > (sizeof(char) * letters))
	{
		buf[letters_read] = '\0';
	}
	close (fd);
	return (letters_written);
}
