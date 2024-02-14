#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * @array: the array
 * @size: array's size
 * @action: pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
