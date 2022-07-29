#include "hash_tables.h"
/**
 * key_index - a function that gived an index of a character key
 *
 * @key: a pointer to the key string
 * @size: size of a hash table
 *
 * Return: index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
