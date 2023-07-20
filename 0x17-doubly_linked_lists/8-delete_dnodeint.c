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

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: list head
 * @index: index
 * Return: 1: success, -1: failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *to_del;

	if (head == NULL)
		return (-1);
	to_del = get_dnodeint_at_index(*head, index);

	if (to_del == NULL)
		return (-1);
	if (to_del->prev == NULL)
	{
		*head = to_del->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		if (to_del->next != NULL)
			to_del->next->prev = to_del->prev;
		to_del->prev->next = to_del->next;
	}
	free(to_del);
	return (1);
}
