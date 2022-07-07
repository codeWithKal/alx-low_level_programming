#include "lists.h"
/**
 * *get_dnodeint_at_index - gets a list element at specified index
 * @head: head of a list
 * @index: index of a list to be returned
 * Return: nth list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	if (head == NULL)
		return (0);
	current = head;

	while (index != 0)
	{
		current = current->next;
		index--;
		if (current == NULL)
			return (0);
	}
	return (current);
}
