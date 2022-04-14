#include "main.c"
/**
 * print_triangle - prints a right angled triangle
 * @size: is the size of the triangle
 */
void print_triangle(int size)
{
	int row, culumn, filler;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
			{
				if ((size - i - 1) > j)
					_putchar(' ');
				else
					_putchar('#');
				_putchar('\n');
			}
		}
	}
}
