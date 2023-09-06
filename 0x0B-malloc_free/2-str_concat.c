#include "main.h"
/**
 * str_concat - concat two strings
 * @s1: first string
 * @s2: second string
 * Return: Nothing
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	j = 0, k = 0;
	while (s1[j++] != '\0')
		;
	while (s2[k++] != '\0')
		;
	ptr = malloc((j + k - 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < j; ++i)
		ptr[i] = s1[i];
	for (l = 0; l < k; ++l, ++i)
		ptr[i] = s2[k];
	return (ptr);
}
