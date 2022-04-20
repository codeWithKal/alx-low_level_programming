#include "main.h"
/**
 * _strcat - concatnates a string
 * @dest: a destination character pointer
 * @src: a source character pointer
 * Return: a character pointer
 */
char *_strcat(char *dest, char *src)
{
	char destination[];
	char source[];
	int i, j;

	i = 0;
	destination = *dest;
	source = *src;
	while (destination[i] != '\n')
		i++;
	for (j = 0; source[j]; j++)
	{
		destination[i] = source[j];
		i++;
	}
	*dest = destination;
	return (dest);
}

