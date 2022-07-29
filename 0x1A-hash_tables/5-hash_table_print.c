#include "hash_tables.h"
/**
 * hash_table_print - prints key value pair of a hash table.
 * @ht: pointer to the hash table.
 *
 * Return: nothing(viod function)
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long i;
	int flag = 1;

	if ((ht != NULL) && (ht->array != NULL))
	{
		printf("{");
		for (i = 0; i < ht->size - 1; i++)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				printf("%s'%s': '%s'", flag ? "" : ", ", temp->key, temp->value);
				flag = 0;
				temp = temp->next;
			}
		}
		printf("}\n");
	}
}
