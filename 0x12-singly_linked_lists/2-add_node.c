#include "lists.h"

/**
 * add_node - add node to list
 * @head: linked list head
 * @str: str value
 * Return: address of the new node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t	*node;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(node));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	node->len = 0;
	while (node->str[node->len] != '\0')
		node->len++;

	node->next = *head;
	*head = node;
	return (node);
}
