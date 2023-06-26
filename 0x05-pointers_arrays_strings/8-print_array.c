#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 * Return: no return
 */
void print_array(int *a, int m)
{
	int i = 0;

	for (; i < m; i++)
	{
		printf("%d", *(a + i));
		if (i != (m - 1))
			printf(", ");
	}
	printf("\n");
}
