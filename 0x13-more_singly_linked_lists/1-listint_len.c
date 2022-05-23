#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * listint_len - returns the number of elements
 * @h: a pointer to the linked list
 * Return: the number of a elements of a list
 */
size_t listint_len(const listint_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
	{
		h = h->next;
	}
	return (num);
}
