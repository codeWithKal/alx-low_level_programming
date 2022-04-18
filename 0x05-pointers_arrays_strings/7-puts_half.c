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
	while (str[i] != '\0')
	{
		i++;
	}
	length = i;
	start = (length + 1) / 2;
	for (i = start; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}
