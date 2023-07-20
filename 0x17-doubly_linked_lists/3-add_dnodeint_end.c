#include "lists.h"

/**
 * add_dnodeint_end - add node
 * @head: list head
 * @n: value
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *last;

	if (!head)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if ((*head))
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = node;
		node->prev = last;
	}
	else
		(*head) = node;
	return (node);
}
