#include "holberton.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
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
 * create_file - creates a file
 * @filename: pointer to the file to be created
 * @text_content: terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int write_to_file;
	ssize_t length;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR, S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}

	length = _strlen(text_content);

	write_to_file = write(fd, text_content, length);

	if (write_to_file != length)
	{
		close(fd);
		return (-1);
	}
	if (write_to_file == -1)
	{
		return (-1);
	}
	return (1);
}
