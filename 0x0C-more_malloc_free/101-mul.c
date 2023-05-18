#include "main.h"

/**
 * _is_int - check if string contains an integer
 *@str: string
 *Return: 1 or 0
 */
int _is_int(char *str)
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
 * _puts - print string
 *@str: string
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

/**
 * print_number - print an integer
 * @n: int
 */
void print_number(int n)
{
	if (n >= 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * _atoi - parse int
 * @str: string contains int value
 *Return: parsed number
 */
int _atoi(char *str)
{
	int num;
	int i;

	num = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		num = num * 10 + str[i] - '0';
	}
	return (num);
}

/**
 * main - multiplication of two numbers
 *@ac: args count
 *@av: args value
 *Return: 0 or 98
 */
int main(int ac, char *av[])
{
	if (ac != 3 || !_is_int(av[1]) || !_is_int(av[2]))
	{
		_puts("Error");
		exit(98);
	}
	print_number(_atoi(av[1]) * _atoi(av[2]));
	_puts("");
	return (0);
}
