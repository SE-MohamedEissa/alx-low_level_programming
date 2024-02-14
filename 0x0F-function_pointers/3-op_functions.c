#include "3-calc.h"

/**
 * op_add - sum operation funcion
 * @a: num1
 * @b: num2
 * Return: sum of values
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract operation function
 * @a: num1
 * @b: num2
 * Return: sub of values
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplcation operation function
 * @a: num1
 * @b: num2
 * Return: mul of values
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation function
 * @a: num1
 * @b: num2
 * Return: div of values
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus operation function
 * @a: num1
 * @b: num2
 * Return: mod of values
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
