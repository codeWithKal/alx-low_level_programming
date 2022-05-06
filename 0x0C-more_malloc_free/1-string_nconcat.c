#include "main.h"
#include <stdlib.h>
/**
 * strlen - computes the length of a string
 * @s: the string parameter
 * Return: the length of string s
 */
unsigned int strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two strings by a constraint of
 * n byte of the second string
 * @s1: the first string pointer to be concatenated
 * @s2: the second string pointer to be concatedanted
 * @n: the number of byte of second string to be concatenated
 * Return: a pointer to new concatenatted string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *final;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n <= strlen(s2))
		final = malloc(strlen(s1) + n + 1);
	else
		final = malloc(strlen(s1) + strlen(s2) + 1);
	if (final == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		final[i] = s1[i];
	for (j = 0; s2[j]; j++, i++)
		final[i] = s2[j];
	final[i] = '\0';
	return (final);
}
