#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements of a list_t
 * @h: a pinter to list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil) \n");
		}
		else
		{
			printf("[%u] %s \n", h->len, h->str);
		}
		h = h->next;
		node++;
	}
	return (node);
}
