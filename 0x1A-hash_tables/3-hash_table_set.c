#include "hash_tables.h"

/**
 * set_value - set value in strucy
 * @key: a string that cannot be empty.
 * @value: a string refer to value.
 * REturn: struct refer to node.
*/

hash_node_t *set_value(const char *key, const char *value)
{
	hash_node_t *hn = malloc(sizeof(hash_node_t));

	if (hn == NULL)
		return (NULL);
	hn->key = malloc(sizeof(strlen(key) + 1));
	if (hn->key == NULL)
		return (NULL);
	hn->value = malloc(sizeof(strlen(value) + 1));
	if (hn->value == NULL)
		return (NULL);
	hn->next = NULL;
	strcpy(hn->key, key);
	strcpy(hn->value, value);
	return (hn);
}
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: a pointer to the hash table array.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 *
 * Return: 1 on success, 0 on error.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hn = NULL;
	hash_node_t *node = NULL;
	unsigned long int index = key_index((unsigned char *)key, ht->size);

	if (key == NULL || ht == NULL)
		return (0);
	if (ht->array[index] == NULL)
	{
		hn = set_value(key, value);
		if (hn == NULL)
			return (0);
		ht->array[index] = hn;
		return (1);
	}
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			if (strcmp(node->value, value) == 0)
				return (1);
			free(node->value);
			node->value = malloc(sizeof(strlen(value) + 1));
			if (node->value == NULL)
				return (0);
			strcpy(node->value, value);
			return (1);
		}
		node = node->next;
	}
	if (node == NULL)
	{
		hn = set_value(key, value);
		if (hn == NULL)
			return (0);
		hn->next = ht->array[index];
		ht->array[index] = hn;
		return (1);
	}
	return (0);
}
