#include "hash_tables.h"
/**
 * set_value - mallocs a key/value pair to the hash table.
 * @key: the key, a string that cannot be empty.
 * @value: the value associated with the key, can be an empty string.
 *
 * Return: pointer to the new node.
 */
hash_node_t *set_value(const char *key, const char *value)
{
	hash_node_t *hn = malloc(sizeof(hash_node_t));

	if (hn == NULL)
		return (NULL);
	hn->key = malloc(strlen(key) + 1);
	if (hn->key == NULL)
		return (NULL);
	hn->value = malloc(strlen(value) + 1);
	if (hn->value == NULL)
		return (NULL);
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
	unsigned long int index;
	hash_node_t *node;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		node = set_value(key, value);
		if (node == NULL)
			return (0);
		node->next = NULL;
		ht->array[index] = node;
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
			node->value = malloc(strlen(value) + 1);
			if (node->value == NULL)
				return (0);
			strcpy(node->value, value);
		}
		node = node->next;
	}
	if (node == NULL)
	{
		node = set_value(key, value);
		if (node == NULL)
			return (0);
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}
	return (0);
}
