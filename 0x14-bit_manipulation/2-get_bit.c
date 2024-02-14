#include "main.h"

/**
 * get_bit - print an index bit value
 * @n: the number
 * @index: the index
 * Return: index bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (n >> index & 1);
}
