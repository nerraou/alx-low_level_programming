#include "main.h"

/**
 * main - prints program name
 * @argc: arguments count
 * @argv: arguments value
 * Return: Always 0 (Success)
 */
int main(int argc, char const *argv[])
{
	int i;

	(void)argc;
	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');

	return (0);
}
