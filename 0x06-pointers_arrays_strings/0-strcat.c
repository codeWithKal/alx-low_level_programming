#include "main.h"
/**
 * _strcat - concatnates a string
 * @dest: a destination character pointer
 * @src: a source character pointer
 * Return: a character pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\n')
		i++;
	j = 0;
	while (src[j] != '\n')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\n';
	return (dest);
}
