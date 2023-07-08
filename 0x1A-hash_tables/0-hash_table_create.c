#include "hash_table.h"
/**
 * hash_table_creat - Create hash table.
 * @size: size of hash table.
 * Return: a pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = calloc(size, sizeof(hash_node_t));
	if (new_table->NULL)
		return (NULL);
}
