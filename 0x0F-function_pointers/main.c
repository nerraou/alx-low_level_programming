#include "calc.h"

/**
 * main - check the code
 *@ac: arg number
 *@av: args
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	int val1;
	int val2;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	val1 = atoi(av[1]);
	val2 = atoi(av[3]);
	printf("%d\n", get_op_func(av[2])(val1, val2));
	return (0);
}
