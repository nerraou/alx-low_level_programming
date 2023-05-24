#include "function_pointers.h"

/**
 * print_name - print name
 *@f: function pointer
 *@name: arg
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	f(name);
}
