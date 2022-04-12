#include <stdio.h>
/**
 * main - prints the sum of multiples of 3 and 5
 */
void main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		while ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d", sum);
}
