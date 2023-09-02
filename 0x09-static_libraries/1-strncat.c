#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: input
 * @src: input
 * @n: amount of bytes used from src.
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
