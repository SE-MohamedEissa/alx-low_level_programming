#include "calc.h"
/**
 * main - main function
 * @argc: argu count
 * @argv: array of argu
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int (*ff)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ff = get_op_fun(argv[2]);
	if (!ff)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", ff(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
