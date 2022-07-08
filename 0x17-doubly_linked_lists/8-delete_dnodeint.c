#include "lists.h"
/**
 * delete_dnodeint_at_index - delets a node at given index
 * @head: a poiter to the head of a list
 * @index: index of a list to be deleted
 * Return: 1 (success) or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;

	dlistint_t *current;

	current = *head;

	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		(*head) = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	while (i < index)
	{
		if (current == NULL)
		{
			return (-1);
		}
		current = current->next;
		i++;
	}
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
