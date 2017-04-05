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
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of the file
 * @text_content: to be written in the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int length;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_APPEND | O_WRONLY, 0664);
	if (fd == -1)
	{
		return (-1);
	}
	length = _strlen(text_content);
	write(fd, text_content, length);
	if (filename)
	{
		if (text_content == NULL)
		{
			return (1);
		}
		return(-1);
	}
	close(fd);
	return (1);
}
