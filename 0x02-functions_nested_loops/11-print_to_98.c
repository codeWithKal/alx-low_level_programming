#include "main.h"
/**
 * print_to_98 - prints number form n to 98
 *@n: is the start of the list
 */
void print_to_98(int n)
{
	int i = 0;

	for (i = n; i <= 98; i++)
	{
		printf("%d", n);
		while (n != 98)
		{
			printf(", ");
		}
	}
}
