#include "hash_tables.h"

/**
 * hash_table_create - hash table
 * @size: size
 * Return: created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
		return (NULL);

	table->size = size;

	return (table);
}
