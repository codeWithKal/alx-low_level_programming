#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates a memory size of a parameter
 * @b: the size of memory in bytes to be allocated by malloc
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
