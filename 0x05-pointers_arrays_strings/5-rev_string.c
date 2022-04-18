#include "main.h"
/**
 * rev_string - reverses a string
 * @s: a character pointer parameter
 * Return: nothing
 */
void rev_string(char *s)
{
	char c;
	char *start, *end;
	int i, length, count;

	length = 0;
	for (i = 0; s[i]; i++)
	{
		length++;
	}
	count = length;
	start = s;
	end = s;
	for (i = 0; i < count - 1; i++)
	{
		*end++;
	}
	for (i = 0; i < count / 2; i++)
	{
		c = *end;
		*end = *start;
		*start = c;
		start++;
		end--;
	}
}
