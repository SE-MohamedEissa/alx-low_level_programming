#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: is string to be printed between numbers.
 * @n: number of integerx
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(num);
}
