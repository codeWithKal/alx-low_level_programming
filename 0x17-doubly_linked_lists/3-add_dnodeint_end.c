#include "lists.h"
/**
 * *add_dnodeint_end - adds a node at the end of a list
 * @head: a pointer to the head of a list
 * @n: a data within the list node
 * Return: address of a new element or null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new_node;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (current)
	{
		current->next = new_node;
		new_node->prev = current;
	}
	else
		*head = new_node;
	return (new_node);
}
