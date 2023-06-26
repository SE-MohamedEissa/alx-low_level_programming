#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str:  input string
 * Return: no return
 */
void puts_half(char *str)
{
	int l = 0, i, n;

	while (str[l] != '\0')
		l++;

	if (l % 2 == 0)
		n = l / 2;

	else
		n = (l + 1) / 2;

	for (i = n; i < l; i++)
		_putchar(str[i]);

	_putchar('\n');
}
