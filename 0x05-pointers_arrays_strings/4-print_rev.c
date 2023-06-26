#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @str: an input string
 * Return: Nothing
 */
void print_rev(char *str)
{
	int l = 0;

	while (str[l] != '\0')
		l++;

	while (l)
		_putchar(str[--l]);

	_putchar('\n');
}
