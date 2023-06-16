#include <stdio.h>

/**
 * main - main
 *
 * Return: 0
 */
int main(void)
{
	char c[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
