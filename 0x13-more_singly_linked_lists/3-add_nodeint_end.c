#include "lists.h"

/**
 * add_nodeint_end - add node to the end of the list
 * @head: linked list head
 * @n: n value
 * Return: address of the new node or NULL
 */
list_t *add_nodeint_end(list_t **head, const int n)
{
	listint_t	*node;
	listint_t	*it;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->next = NULL;
	node->n = n;
	if (*head == NULL)
		*head = node;
	else
	{
		it = *head;
		while (it->next != NULL)
			it = it->next;
		it->next = node;
	}
	return (node);
}
