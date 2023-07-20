#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: list head
 * @idx: index
 * @n: value
 * Return: node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *cur;
	dlistint_t *prev;
	unsigned int i;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	prev = NULL;
	i = 0;
	cur = *h;
	while (cur != NULL && i < idx)
	{
		prev = cur;
		cur = cur->next;
		i++;
	}
	if (i != idx)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (cur == NULL)
	{
		prev->next = node;
		node->prev = prev;
	}
	else
	{
		node->next = cur;
		node->prev = cur->prev;
		cur->prev->next = node;
		cur->prev = node;
	}
	return (node);
}
