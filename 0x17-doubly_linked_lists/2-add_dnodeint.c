#include "lists.h"

/**
 * add_dnodeint - add node
 * @head: list head
 * @n: value
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (!head)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = (*head);

	if ((*head))
		(*head)->prev = node;
	(*head) = node;
	return (node);
}
