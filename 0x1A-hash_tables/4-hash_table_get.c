#include "hash_tables.h"

/**
 * hash_table_get - get value of a key
 * @ht: hash table
 * @key: key
 *
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	if (!ht || !key || key[0] == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		head = ht->array[index];
		while (head)
		{
			if (strcmp(head->key, key) == 0)
				return (head->value);
			head = head->next;
		}
	}
	return (NULL);
}
