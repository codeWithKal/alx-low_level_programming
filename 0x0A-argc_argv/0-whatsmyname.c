#include "main.h"
/**
 * main - the main function to print the programs name followed by a new line
 * @argc: a number of arguments passed to main function
 * @argv: an array containing a string of arguments
 * Return: 0 (always success)
 */
int main(argc, char *argv[])
{
	int i = 0;

	while (argv[0 + i] != '\0')
	{
		_putchar(argv[0 + i]);
		i++;
	}
	_putchar('\n');
}
