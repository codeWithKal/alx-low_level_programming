#include "main.h"
#include <stdio.h>
/**
 * length_finder - function to calculate a length of a string
 * @b: a binary string pointer
 * Return: a legth of a string
 */
int length_finder(const char *b)
{
	int legth, i = 0;

	while (b[i] != '\0')
	{
		i++;
	}
	length = i;
	return (length);
}


/**
 * binary_to_uint - a function that changes a binary number to integer
 * @b: a character pointing to a string lateral of binary number
 * Return: unsigned integer value equivalent to the binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i, len;

	if (b == NULL)
		return (0);

	len = length_finder(b);

	for (i = 0; i != len; i++)
	{
		if (b[len - i - 1] == '1')
			n += 1 << i;
		else if (b[len - i - 1] != '0')
			return (0);
	}

	return (n);
}
