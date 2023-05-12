#include "main.h"

/**
 * main - mult of two args
 * @argc: arguments count
 * @argv: arguments value
 * Return: 0 or 1
 */
int main(int argc, char const *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
