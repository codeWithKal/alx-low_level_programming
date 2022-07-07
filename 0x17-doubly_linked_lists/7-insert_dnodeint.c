#include "lists.h"
/**
 * *insert_dnodeint_at_index - inserts a node at a given position
 * @h: a pointer to the head of a list
 * @idx: index to put the new list
 * @n: a data of new list element
 * Return: adress of a new list or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	while (idx != 1)
	{
		current = current->next;
		--idx;
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = current->next;
	new_node->prev = current;
	current->next = new_node;

	return (new_node);
}
