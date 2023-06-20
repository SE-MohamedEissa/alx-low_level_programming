#include "main.h"
/**
 * print_sign - Check
 * @n: integer
 * Return: 1 or 0
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
		value = 1, _putchar('+');
	else if (n < 0)
		value = -1, _putchar('-');
	else
		value = 0, _putchar('0');
	return (value);
}
