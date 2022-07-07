#include <lists.h>
/**
 * *add_dnodeint - adds a node to the beginning
 * @head: a pointer to the head of a list
 * @n: integer datavalue of a new list element
 * Return: address of a new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
	}
	new = *head

