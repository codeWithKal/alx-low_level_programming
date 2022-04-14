#include "main.c"
/**
 * print_traingle - prints a triangle
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
			for (column = size; column >= 1; column--)
			{
			for (filler = size; filler > column; filler--)
			{
			_puchar('#');
			}
			_putchar('#');
			}
		}
	}
}

