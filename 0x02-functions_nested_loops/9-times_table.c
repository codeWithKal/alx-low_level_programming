#include "main.c"
/**
 * times_table - produces a muliplication table
 * @void: doesn't take any parameter
 */
void times_tabel(void)
{
	int row = 0;
	int columt = 0;

	for (row = 0; row <= 9; row++)
		for (column = 0; column <= 9; column++)
		{
			int result;

			result = row * column;
			_putchar(result);
		}
}
