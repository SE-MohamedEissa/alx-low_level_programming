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
	if (n < j)
		j = n;
	str = malloc(i + j + 1);
	if (!str)
		return (NULL);
	for (k = 0; k < i + j; ++k)
	{
		if (k < i)
			str[k] = s1[k];
		else
			str[k] = s2[k - i];
	}
	return (str);
}
