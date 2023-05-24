#include "3-calc.h"

/**
 * op_add - add a to b
 * @a: val1
 *@b: val2
 * Return: the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub a from b
 * @a: val1
 *@b: val2
 * Return: the sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul a to b
 * @a: val1
 *@b: val2
 * Return: the mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div a by b
 * @a: val1
 *@b: val2
 * Return: the div
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
 * op_mod - mod a by b
 * @a: val1
 *@b: val2
 * Return: the mod
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
