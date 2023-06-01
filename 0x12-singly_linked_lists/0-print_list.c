#include "lists.h"

/**
 * print_list - print list content
 *@h: linked list head
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
	size_t	size;

	size = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
