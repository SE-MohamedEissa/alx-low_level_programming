#include "main.h"
/**
 * _islower - check
 * @c: char
 * Return: 0 or 1
 */
int _islower(int c);
{
	char i;
	int flag = 0;

	for (i = 'a'; i <= 'z'; i++)
		if (i == c)
			flag = 1;
	return (flag);
}
