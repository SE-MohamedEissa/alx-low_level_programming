#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, f;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		f = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				f = 0;
				break;
			}
		}
		if (f == 1)
			break;
	}
	return (i);
}
