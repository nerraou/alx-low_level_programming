#include "lists.h"

/**
 * add_nodeint - add node to list
 * @head: linked list head
 * @n: n value
 * Return: address of the new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t	*node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
