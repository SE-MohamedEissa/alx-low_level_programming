#include <stdio.h>
/**
 * main - i dont care
 * @argc: argu count
 * @argv: argus itself
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc)
	{
		printf("%d\n", argc - 1);
		(void)argv;
	}
	return (0);
}
