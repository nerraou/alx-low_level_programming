#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: linked list head
 * Return: new linked list head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev;

	if (!head)
		return (NULL);
	prev = NULL;
	if (*head == NULL || (*head)->next == NULL)
		return (*head);
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}
