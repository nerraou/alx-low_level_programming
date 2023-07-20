#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: list head
 * @index: index
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	if (i != index)
		return (NULL);
	return (head);
}
