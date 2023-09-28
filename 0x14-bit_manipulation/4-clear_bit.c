#include "main.h"

/**
 * clear_bit - set bit to 0
 * @n: number
 * @index: index of bit
 * Return: true
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}
