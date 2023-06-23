#include "main.h"

/**
 * print_number - prints all numbers.
 * @n: input int.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int n1, nn, c;

	if (n < 0)
	{
		_putchar(45);
		n1 = n * -1;
	}
	else
	{
		n1 = n;
	}

	nn = n1;
	c = 1;

	while (nn > 9)
	{
		nn /= 10;
		c *= 10;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar(((n1 / c) % 10) + 48);
	}
}
