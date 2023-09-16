#include "variadic_functions.h"

/**
 * print_all - print anything.
 * @format: list of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list all;
	unsigned int i = 0, j = 0, k = 0;
	char *ptr, *c = ", ";
	const char form[] = "cifs";

	va_start(all, format);
	while (format && format[j])
		j++;
	while (format && format[i])
	{
		if (i == j - 1)
			c = "";
		switch (format[i])
		{
		case 'c':
			printf("%c%s", va_arg(all, int), c);
			break;
		case 'i':
			printf("%d%s", va_arg(all, int), c);
			break;
		case 'f':
			printf("%f%s", va_arg(all, double), c);
			break;
		case 's':
			ptr = va_arg(all, char *);
			printf("%s%s", ptr ? ptr : "(nil)", c);
			break;
		} i++;
	}
	printf("\n"), va_end(all);
}
