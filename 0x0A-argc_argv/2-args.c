#include <stdio.h>
/**
 * main - Mmmmm
 * @argc: argum count
 * @argv: argums itself
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
