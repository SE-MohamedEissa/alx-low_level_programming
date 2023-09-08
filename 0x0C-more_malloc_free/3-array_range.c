#include "main.h"
/**
 * *array_range - creates array
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *ptr, i, j;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
