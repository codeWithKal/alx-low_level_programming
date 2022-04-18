#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: a character pointer
 * Return: nothing
 */
void puts_half(char *str)
{
	int length, i, start;

	length = 0;
	for (i = 0; str[i]; i++)
	{
		length++;
	}
	if ((length % 2) == 0)
		start = length / 2;
	else if ((length % 2) == 1)
		start = (length - 1) / 2;
	for (i = start; i <= length; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
