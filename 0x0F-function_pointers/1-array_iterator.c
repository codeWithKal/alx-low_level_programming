#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - calles a function on differnt values of an array paramters
 * @array: an array parameter
 * @size: size of an array
 * @action: a pointer to the function we gonna use
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
