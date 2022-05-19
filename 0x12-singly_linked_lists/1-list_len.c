#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * list_len - a function that returns a length of the linked list
 * @h: the linked list pointer
 * Return: the length of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t node;

	for (node = 0; h != NULL; node++)
	{
		h = h->next;
	}
	return (node);

}
