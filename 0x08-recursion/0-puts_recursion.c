#include "main.h"
/**
 * _puts_recursion - a function that prints a function followed by a new line
 * @s: a character pointer
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	_putchar(s[0]);
	_puts_recursion(s + 1);
	_putchar('\n');
}
