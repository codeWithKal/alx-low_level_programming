#include "lists.h"
/**
 * *add_dnodeint - adds a node to the beginning
 * @head: a pointer to the head of a list
 * @n: integer datavalue of a new list element
 * Return: address of a new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
