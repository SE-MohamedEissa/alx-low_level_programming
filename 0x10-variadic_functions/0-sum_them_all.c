#include "variadic_functions.h"
/**
 * sum_them_all -  sum parameter
 * @n: num
 * @...: Other parameters
 * Return: parameters,If n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list par;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(par, n);
	for (; i < n; i++)
		sum += va_arg(par, int);
	va_end(par);
	return (sum);
}
