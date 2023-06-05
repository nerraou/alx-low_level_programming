#include "lists.h"

/**
 * print_listint - print list content
 *@h: linked list head
 * Return: size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t	size;

	size = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
