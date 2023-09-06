#include "main.h"
/**
 * _strdup - pointer to a copy of string
 * @str: the string
 * Return: Nothing
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	j = 0;
	while (str[j++] != '\0')
		;

	ptr = malloc(j * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < j; ++i)
		ptr[i] = str[i];
	return (ptr);
}
