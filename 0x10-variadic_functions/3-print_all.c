#include "variadic_functions.h"

/**
 * print_c - print char
 * @list: arg
 */
void print_c(va_list list)
{
	printf("%c", (unsigned char)va_arg(list, int));
}

/**
 * print_i - print char
 * @list: arg
 */
void print_i(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_f - print float
 * @list: arg
 */
void print_f(va_list list)
{
	printf("%f", (float)va_arg(list, double));
}

/**
 * print_s - print string
 * @list: arg
 */
void print_s(va_list list)
{
	char *str;

	str = va_arg(list, char*);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - print all
 * @format: string format
 */
void print_all(const char *const format, ...)
{
	action_t actions[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{'\0', NULL}};
	int i;
	int j;
	va_list args;

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (actions[j].specifier && actions[j].specifier != format[i])
			j++;
		switch (actions[j].specifier)
		{
		case '\0':
			break;

		default:
			if (i != 0)
				printf(", ");
			actions[j].f(args);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
