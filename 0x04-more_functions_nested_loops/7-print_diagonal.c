#include "main.h"
/**
 * print_diagonal - prits diagonal line
 * @n: the size of diagonal
 */
void print_diagonal(int n)
{
	int row, column;

	for (row = 0; row < n; row++)
	{
		for (colum = 0; column < row; column++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
