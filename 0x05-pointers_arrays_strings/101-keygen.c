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
	int s;
	char c;

	srand(time(NULL));
	while (s <= 2772)
	{
		c = rand() % 128;
		s += c;
		putchar(c);
	}
	printf("%c\n", (2772 - s));
	return (0);
}
