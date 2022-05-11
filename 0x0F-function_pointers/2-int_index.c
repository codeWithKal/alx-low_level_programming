#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: the array of integers
 * @size: the size of our array
 * @cmp: a function pointer to be used to compare numbers
 * Return: 0 on success and -1 on unsuccess
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
