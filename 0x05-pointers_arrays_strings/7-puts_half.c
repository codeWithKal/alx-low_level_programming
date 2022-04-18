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
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
