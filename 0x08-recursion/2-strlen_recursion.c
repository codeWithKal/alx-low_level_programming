#include "main.h"
/**
 * _strlen_recursion - returns a length of string
 * @s: a character pointer to the string
 * Return: length of the string passed as an argument
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\n')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
