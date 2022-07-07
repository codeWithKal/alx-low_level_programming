#include "lists.h"
/**
 * sum_dlistint - sums up a data in the list
 * @head: a pointer to the head of a list
 * Return: sum of a list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while(head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
