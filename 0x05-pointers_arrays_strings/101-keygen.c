#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for
 * the program 101-crackme.
 * Return: 0
 */
int main(void)
{
	int st;
	char c;

	srand(time(NULL));
	while (st <= 2772)
	{
		c = rand() % 128;
		st += c;
		putchar(c);
	}
	printf("%c\n", (2772 - st));
	return (0);
}
