#include "main.h"
/**
 * _strcpy - a functions that return a character pointer
 * @dest: a character pointer variable
 * @src: a character pointer variable
 * Return: a character pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
	while (src[i] != '\n')
		dest[i] = src[i];
	}
	dest[i] = '\n';

	return (dest);
}
