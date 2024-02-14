#include "main.h"
/**
 * print_binary - print number i binary
 * @n: number
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int i = 63, c = 0;

	for (; i >= 0; i--)
		if (n >> i & 1)
			_putchar('1'), c = 1;
		else if (c)
			_putchar('0');
	if (!c)
		_putchar('0');
}
