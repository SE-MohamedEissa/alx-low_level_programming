#include "main.h"

/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: no return
 */
void rev_string(char *str)
{
	int len = 0, i = 0;
	char x;

	while (str[len] != '\0')
		len++;

	while (i < len--)
	{
		x = str[i];
		str[i++] = str[len];
		str[len] = x;
	}
}
