#include <stdio.h>
/**
 * main - entry point
 * @void: no parameter
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		while (!(ch == 'e' || 'q'))
		putchar(ch);
	putchar('\n');
	return (0);
}
