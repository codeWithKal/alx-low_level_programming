#include "main.c"
/**
 * print_alphabet - prints a lower case alphabet
 * @void: no parameter
 */
void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		_putchar(lowercase);
	_putchar('\n');
}
