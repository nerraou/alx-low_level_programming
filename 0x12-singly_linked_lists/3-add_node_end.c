#include "lists.h"

/**
 * add_node_end - add node to the end of the list
 * @head: linked list head
 * @str: str value
 * Return: address of the new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t	*node;
	list_t	*it;

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

	it = *head;
	if (it == NULL)
		*head = node;
	else
	{
		while (it->next != NULL)
			it = it->next;
		it->next = node;
	}
	return (node);
}
