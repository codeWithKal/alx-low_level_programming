#include "variadic_functions.h"
/**
 * print_strings - prints a string, followed by a new line
 * @separator: a string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, n));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
