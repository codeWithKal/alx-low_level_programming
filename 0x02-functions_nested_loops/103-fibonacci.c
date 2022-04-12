#include <stdio.h>
/**
 * main - sums up the even fibonacci numbers with bound
 * Return: 0 (always sucess)
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, next_fib;
	float total;

	while (1)
	{
		next_fib = fib1 + fib2;
		if (next_fib > 4000000)
			break;
		if (next_fib % 2 == 0)
			total += next_fib;
		fib1 = fib2;
		fib2 = next_fib;
	}
	printf("%.0f\n", total);
	return (0);
}
