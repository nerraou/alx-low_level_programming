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
	dlistint_t *node_at_idx;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	node_at_idx = get_dnodeint_at_index(*h, idx);
	if (node_at_idx == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = node_at_idx;
	node->prev = node_at_idx->prev;
	node_at_idx->prev->next = node;
	node_at_idx->prev = node;
	return (node);
}
