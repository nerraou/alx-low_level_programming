#include "hash_tables.h"

/**
 * add_node - add node
 * @head: head
 * @key: string used to generate hash value
 * @value: value
 *
 * Return: 1 or 0
 */
int add_node(hash_node_t **head, const char *value, const char *key)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	if (node->key != NULL)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = *head;
	*head = node;
	return (1);
}

/**
 * hash_table_set - hash table set
 * @ht: hash table
 * @key: string used to generate hash value
 * @value: value
 *
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *head;

	if (!ht || !key || key[0] == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		head = ht->array[index];
		while (head)
		{
			if (strcmp(head->key, key) == 0)
			{
				free(head->value);
				head->value = strdup(value);
				if (head->value == NULL)
					return (0);
				return (1);
			}
			head = head->next;
		}
	}
	return (add_node(&(ht->array[index]), value, key));
}
