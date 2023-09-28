#include "main.h"

/**
 * set_bit - make bit equal 1
 * @n: number
 * @index: index of the bit
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1UL << index);
	return (1);
}
