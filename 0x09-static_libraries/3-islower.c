#include "main.h"

/**
 *_islower  - Check
 *@c: An input character.
 * Description: check if the char lowercase or not.
 * Return: 1 if is lowercase or 0 if is otherwise.
 */
int _islower(int c)
{
	char i;
	int low = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			low = 1;
	}
	return (low);
}
