#include "main"
/**
 * _isdigit - checkes for digit inputs
 * @c: takes c parameter
 * Return: 1 (is digit) or 0 (when is not digit)
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
