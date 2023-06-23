#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @s: input int.
 * Return: no return.
 */
void print_triangle(int s)
{
	int i, j;

	for (i = 0; i < s; i++)
	{
		for (j = 1; j < (s - i); j++)
			_putchar(' ');
		for (j--; j < s; j++)
			_putchar(35);
		if (i < (s - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
