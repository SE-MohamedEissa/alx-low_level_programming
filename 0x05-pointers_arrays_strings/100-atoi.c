#include <stdio.h>

/**
 * _atoi - function that converts string to an integer
 * @s:input string
 * Return: integer from conversion
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int t = 0;
	char x = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			x = 1;
			t = t * 10 + *s - '0';
		}

		else if (x)
			break;
		s++;
	}

	if (sign < 0)
		t = (-t);

	return (t);
}
