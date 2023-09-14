#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array
 * @size: array size
 * @cmp: pointer to function
 * Return: index of element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(arra[i]))
			return (i);
	return (-1);
}
