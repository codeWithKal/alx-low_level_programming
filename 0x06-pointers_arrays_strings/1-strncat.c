#include "main.h"
/**
 * _strncat - concatnates a specified bytes of a string to one string
 * @dest: a destination string pointer
 * @src: a source string pointer
 * @n: an integer parameter n
 * Return: a character pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\n')
		i++;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
