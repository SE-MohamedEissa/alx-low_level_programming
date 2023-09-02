#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: input.
 * @s2: input.
 * Return: 0 or another number.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
