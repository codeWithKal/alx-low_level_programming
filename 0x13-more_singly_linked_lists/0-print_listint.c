#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
/**
 * print_listint - prints the elements of a list.
 * @h: a pointer to the linked list
 * Return: a number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int counter;

	for (counter = 0; h != NULL; counter++)
	{
		printf("%d", h->n);
		h = h->next;
	}
	return (counter);
}
