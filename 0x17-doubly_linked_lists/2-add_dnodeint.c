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
	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
