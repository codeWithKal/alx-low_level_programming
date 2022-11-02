#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a given value in an array
 *
 * @array: a pointer to the beginning of the array
 * @size: size of an array passed to the function
 * @value: a value to be searched
 * Return: -1 when value not found or array is null
 * otherwise returns index of a value
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array [%d] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
