#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line.
 * @s: pointer to the string to print
 * Return: no return
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
