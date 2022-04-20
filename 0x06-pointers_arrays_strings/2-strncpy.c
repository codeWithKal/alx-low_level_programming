#include "main.h"
/**
 * _strncpy - copies part of a string
 * @dest: a destination pointer
 * @src: a source pointer
 * @n: an integer parameter
 * Return: character pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\n';
	return (dest);
}
