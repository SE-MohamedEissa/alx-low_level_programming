#include <stdio.h>
/**
 * main - main
 * Return: 0;
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i), putchar(j);
			if (i != 56 || j != 57)
				putchar(','), putchar(' ');
		}
	putchar('\n');
	return (0);
}
