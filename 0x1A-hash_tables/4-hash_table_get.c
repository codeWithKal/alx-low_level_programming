#include "hash_tables.h"
/**
 * hash_table_get - retrievs a value associated with the key in hash table.
 *
 * @ht: a pointer to the hash table.
 * @key: a key in a hash table.
 *
 * Return: a values associated with the key in ht
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *my_node;

	if ((ht != NULL) && (ht->array != NULL) && (key != NULL) && strlen(key) > 0)
	{
		index = key_index((unsigned char *)key, ht->size);
		my_node = ht->array[index];
		while (my_node != NULL)
		{
			if (strcmp(my_node->key, key) == 0)
				return (my_node->value);
			my_node = my_node->next;
		}
	}
	return (NULL);
}
