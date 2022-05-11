#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: a name parameter
 * @f: a function pointer f
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
