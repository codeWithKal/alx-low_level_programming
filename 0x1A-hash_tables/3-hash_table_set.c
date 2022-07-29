#include "hash_tables.h"
/**
 * str_copy - copies a string
 *
 * @s: a string parameter
 *
 * Return: the copy of the argument
 */
char *str_copy(const char *s)
{
	unsigned int i, leng;
	char *copy = NULL;

	if (s != NULL)
	{
		leng = strlen(s);
		copy = malloc(sizeof(char *) * (leng + 1));
		if (copy != NULL)
		{
			for (i = 0; i < leng; i++)
			{
				copy[i] = s[i];
			}
			copy[leng] = '\0';
		}
	}
	return (copy);
}
/**
 * hash_table_set - addes a node to the hash table
 *
 * @ht:a hash table pointer
 * @key: a key of the value
 * @value: a value to be stored in hash table
 *
 * Return: 1 on succusses and 0 if not successfull
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *tmp = NULL, *new_node = NULL;


	if ((ht != NULL) && (ht->array != NULL) && (key != NULL) && (strlen(key) > 0))
	{
		index = key_index((unsigned char *)key, ht->size);
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = str_copy(value);
				return (1);
			}
			tmp = tmp->next;
		}
		tmp = ht->array[index];
		new_node = malloc(sizeof(hash_table_t));
		if (new_node != NULL)
		{
			new_node->key = str_copy(key);
			new_node->value = str_copy(value);
			new_node->next = tmp;
			ht->array[index] = new_node;
			return (1);
		}
	}
	return (0);
}
