#include "main.h"

/**
 * _strlen -  function that returns the length of a string.
 * @s : string input.
 * * Return: length of a string.
 */
int _strlen(char *s)
{
	int cnt = 0;

	for (; *s != '\0'; s++)
		cnt++;
	return (cnt);
}
