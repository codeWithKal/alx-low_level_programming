#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints number form n to 98
 *@n: is the start of the list
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		while (i != 98)
		{
			printf(", ");
		}
	}
}
