#include "main.h"
/**
 * is_prime_number - check prime
 * @n: number
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (1);
	int i;

	for (i = 2; i * i <= n; ++i)
		if (n % i == 0)
			return (0);
	return (1);
}
