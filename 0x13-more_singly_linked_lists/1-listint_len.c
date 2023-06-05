#include "lists.h"

/**
 * listint_len - count list len
 *@h: linked list head
 * Return: size of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t	size;

	size = 0;
	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
