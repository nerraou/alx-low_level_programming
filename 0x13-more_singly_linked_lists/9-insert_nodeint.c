#include "lists.h"

/**
 * create_node - create new node
 *@n: value
 *Return: new element
 */
listint_t *create_node(int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	return (node);
}

/**
 * add_front - add node to front
 *@head: linked list head
 *@n: value
 *Return: added element
 */
listint_t *add_front(listint_t **head, int n)
{
	listint_t *node;

	node = create_node(n);
	if (!node)
		return (NULL);
	node->next = *head;
	*head = node;
	return (node);
}

/**
 * insert_nodeint_at_index - insert nodeint at index
 *@head: linked list head
 *@idx: index
 *@n: value
 *Return: element
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *it;
	listint_t *elem;
	listint_t *prev;
	unsigned int i;

	if (!head)
		return (NULL);
	if (idx == 0)
		return (add_front(head, n));
	i = 1;
	it = (*head)->next;
	prev = *head;
	while (it)
	{
		if (i == idx)
		{
			elem = create_node(n);
			if (!elem)
				return (NULL);
			prev->next = elem;
			elem->next = it;
			return (elem);
		}
		i++;
		prev = it;
		it = it->next;
	}
	if (i != idx)
		return (NULL);
	elem = create_node(n);
	if (!elem)
		return (NULL);
	prev->next = elem;
	return (elem);
}
