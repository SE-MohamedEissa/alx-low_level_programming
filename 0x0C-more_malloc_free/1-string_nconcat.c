#include "main.h"
/**
 * string_nconcat - concat two strings
 * @s1: first string
 * @s2: second string
 * @n: size of used from second string
 * Return: Nothing
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, k;

	i = 0, j = 0;
	while (s1 && s1[i])
		i++;
	while (s2 && s2[j])
		j++;
	if (n > j)
		n = j;
	str = malloc(i + n + 1);
	if (!str)
		return (NULL);
	for (k = 0; k < i; ++k)
		str[k] = s1[k];
	for (j = 0; k < i + n; j++, k++)
		str[k] = s2[j];
	str[k] = '\0';
	return (str);
}
