#include "main.h"
/**
 * *array_range - creates array
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	ptr = malloc(sizeof(int) * j);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
