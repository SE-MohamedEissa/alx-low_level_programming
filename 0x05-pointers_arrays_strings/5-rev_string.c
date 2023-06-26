#include "main.h"

/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: no return
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char x;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		x = s[i];
		s[i++] = s[len];
		s[len] = x;
	}
}
