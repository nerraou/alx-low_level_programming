#include "lists.h"

/**
 * print_dlistint - print list content
 *@h: linked list head
 * Return: size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size;

	size = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
