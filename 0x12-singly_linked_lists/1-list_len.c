#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - a function that returns a length of the linked list
 * @h: the linked list pointer
 * Return: the length of the linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int node;

	for (node = 0; h->next != NULL; node++)
	{
		h = h->next;
		return (node);
	}

}
