#include <stdio.h>
#include <stdlib.h>
/**
 * main -  is decription really important ?
 * @argc: number of argu
 * @argv: argu itself
 * Return: 0 (success), 1 when print Error.
 */
int main(int argc, char *argv[])
{
	int num;
	int plus = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	while (num > 0)
	{
		if (num >= 25)
			num -= 25;
		else if (num >= 10)
			num -= 10;
		else if (num >= 5)
			num -= 5;
		else if (num >= 2)
			num -= 2;
		else if (num >= 1)
			num -= 1;
		plus += 1;
	}
	printf("%d\n", plus);
	return (0);
}
