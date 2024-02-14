#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0, temp = 1;
	int i, len = 0;

	if (!b)
		return (0);
	while (b[len])
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		x += temp * (b[i] - '0');
		temp *= 2;
	}
	return (x);
}
