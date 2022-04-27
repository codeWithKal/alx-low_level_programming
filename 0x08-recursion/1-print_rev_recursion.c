#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse order
 * @s: a character pointer
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	while (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
