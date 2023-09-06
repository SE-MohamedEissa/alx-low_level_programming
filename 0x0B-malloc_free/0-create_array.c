#include "main.h"
/**
 * *create_array - function that creates an array of chars
 * @size: size of array
 * @c: type of array
 * Return: Nothing
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(c));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
		ptr[i] = c;
	return (ptr);
}
