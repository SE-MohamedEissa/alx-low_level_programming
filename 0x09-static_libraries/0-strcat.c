#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: input string
 * @src: input string
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (p);
}
