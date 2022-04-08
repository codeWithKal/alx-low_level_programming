#include <stdio.h>
/**
 *main - prints lower alphabets from a - z
 *@void: no parameters
 *
 *Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
