#include "variadic_functions.h"

/**
 * print_all - print anything.
 * @format: list of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list all;
	unsigned int i = 0, j, k = 0;
	char *ptr;
	const char form[] = "cifs";

	va_start(all, format);
	while (format && format[i])
	{
		j = 0;
		while (form[j])
		{
			if (format[i] == form[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(all, int)), k = 1;
			break;
		case 'i':
			printf("%d", va_arg(all, int)), k = 1;
			break;
		case 'f':
			printf("%f", va_arg(all, double)), k = 1;
			break;
		case 's':
			ptr = va_arg(all, char *), k = 1;
			if (!ptr)
			{
				printf("(nil)");
				break;
			}
			printf("%s", ptr);
			break;
		} i++;
	}
	printf("\n"), va_end(all);
}
