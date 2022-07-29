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
	unsigned long int i;

	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (new_table != NULL)
	{
		new_table->size = size;
		new_table->array = malloc(sizeof(hash_node_t *) * size);
		if (new_table->array != NULL)
		{
			for (i = 0; i < size; i++)
			{
				new_table->array[i] = NULL;
			}
		}
	}
	return (new_table);
}
