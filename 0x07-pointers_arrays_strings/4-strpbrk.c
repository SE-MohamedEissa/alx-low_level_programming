#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: input string.
 * @accept: an input character into string s.
 * Return:  pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *first = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = first;
		s++;
	}
	return (NULL);
}
