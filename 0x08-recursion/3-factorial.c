#include "main.h"

/**
 * factorial - get factorial of number
 * @n: number
 * Return: factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
