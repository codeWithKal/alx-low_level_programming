#include "main.h"
/**
 * _puts_recursion - a function that prints a function followed by a new line
 * @s: a character pointer
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
