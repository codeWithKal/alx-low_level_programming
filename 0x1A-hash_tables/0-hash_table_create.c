#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 *
 * @size: size of an array
 *
 * Return: new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index = 0;

	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	if (new_table->size == NULL)
		return (NULL);
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	for (; index < size; index++)
	{
		new_table->array[index] = NULL;
	}
	return (new_table);
}
