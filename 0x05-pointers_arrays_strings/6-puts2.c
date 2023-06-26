#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @s: input string.
 * Return: no return.
 */
void puts2(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(s[count]);
		count++;
	}
}
