#include "lists.h"
/**
 * free_dlistint - frees a linked list
 * @head: a pointer to the head of a link
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
