#include "main.h"
/**
 * sqrti - calc the sqrt
 * @i : num
 * @n : number
 * Return: squaring result
 */
int sqrti(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrti(n, i + 1));
}
/**
 * _sqrt_recursion - calculate square root of number
 * @n: number
 * Return: square root result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}
