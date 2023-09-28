#include "main.h"

/**
 * flip_bits - flip bits
 * @n: first number
 * @m: second number
 * Return: number of flipping bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int temp = n ^ m;
	int i = 0;

	while (temp)
	{
		i += temp & 1;
		temp >>= 1;
	}
	return (i);
}
