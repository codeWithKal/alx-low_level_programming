#include <stdio.h>
/**
 * main - entry point
 * @void: doesn't take any parameter
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}

