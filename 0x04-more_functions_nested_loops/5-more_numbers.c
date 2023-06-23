#include "main.h"

/**
 * more_numbers - prints number 0 to 14.
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int i;
	int c = 0;

	while (c < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		c++;
		_putchar('\n');
	}
}
