#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints positive negative or zero
 *@void: doesn't take any parameter
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positve\n");
	else if (n == 0)
		printf("is zero\n");
	else
		printf("is negative\n");
	return (0);
}
