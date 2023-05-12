#include "main.h"

/**
 * has_only_digits - check if str contains only digits
 * @str: string
 * Return: 1 or 0
 */
int has_only_digits(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * main - add args
 * @argc: arguments count
 * @argv: arguments value
 * Return: 1 or 0
 */
int main(int argc, char const *argv[])
{
	int sum;
	int i;

	sum = 0;
	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			if (!has_only_digits(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
