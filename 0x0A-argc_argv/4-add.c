#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers,
 * Print the result, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 (success), 1 when print Error.
 */
int main(int argc, char *argv[])
{
	int i, j;
	int plus = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		plus += atoi(argv[i]);
	}
	printf("%d\n", plus);
	return (0);
}
