#include "main.h"

/**
 * _isalpha - check
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	char low;
	char upp;
	int i = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (upp = 'A'; upp <= 'Z'; upp++)
		{
			if (c == low || c == upp)
				i = 1;
		}
	}
	return (i);
}
