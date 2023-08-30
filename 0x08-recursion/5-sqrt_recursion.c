#include "main.h"
/**
 * _sqrt_recursion - calculate square root
 * @n : number
 * Return: squaring result
 */
int _sqrt_recursion(int n)
{
	static int i;

	if (n < 0 || i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	i++;
	return (_sqrt_recursion(n));
}
