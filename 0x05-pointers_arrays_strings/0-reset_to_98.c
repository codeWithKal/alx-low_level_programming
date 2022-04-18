#include "main.h"
/**
 * reset_to_98 - updates a value to 98
 * @n: integer pointer variable
 * Return: nothing
 */
void reset_to_98(int *n)
{
	*n = 98;
}
/**
 * main - starting method
 * Return: nothing
 */
int main(void)
{
	int n;

	n = 402;
	_putchar('n');
	_putchar('=');
	_putchar(n);
	reset_to_98(&n);
	_putchar('n');
	_putchar('=');
	_putchar(n);
