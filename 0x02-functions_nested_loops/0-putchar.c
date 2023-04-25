#include "main.h"
/**
 * _strlen - count string len
 * @str: arg
 * Return: str length
 */
int _strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/**
 * _putstr - Prints strin
 * @str: arg
 */
void _putstr(const char *str)
{
	int size;
	int i;

	size = _strlen(str);
	for (i = 0; i < size; i++)
	{
		_putchar(str[i]);
	}
}
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	_putstr("_putchar\n");
	return (0);
}

