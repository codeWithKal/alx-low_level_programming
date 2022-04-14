#include "main.h"
/**
 * print_line - prints a line
 * @n: lengn of the line
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
		while (n--)
			_putchar('_');
		_putchar('\n');
}
