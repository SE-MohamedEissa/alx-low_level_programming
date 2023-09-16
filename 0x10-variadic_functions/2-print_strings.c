#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: is string to be printed between the strings.
 * @n: number of strings
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *ptr;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(string, char *);

		if (ptr)
			printf("%s", ptr);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(string);
}
