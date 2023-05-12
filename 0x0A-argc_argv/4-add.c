#include "main.h"

/**
 * main - add two args
 * @argc: arguments count
 * @argv: arguments value
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
