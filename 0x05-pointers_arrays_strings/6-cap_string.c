#include "holberton.h"

/**
 * cap_string - check the code for Holberton School students.
 * @p: checking values
 * Return: result
 */
char *cap_string(char *p)
{
		int i = 0;

		while (p[i] != '\0')
		{
			switch (p[i])
			{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			(p[i + 1] = p[i] - 32);
			}
			i++;
		}
		return (p);
}
