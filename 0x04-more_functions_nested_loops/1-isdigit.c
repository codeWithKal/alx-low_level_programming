#include "main.h"
/**
 * _isdigit - checkes for digit inputs
 * @c: takes c parameter
 * Return: 1 (is digit) or 0 (when is not digit)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
