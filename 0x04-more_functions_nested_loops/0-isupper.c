#include <stdio.h>
#include "main.h"

/**
 *_isupper - checks the code.
 *@c: c parameter
 *Return: Always 0.
 */
int _isupper(int c)
{
	if (c > 'A' && c < 'Z')
	{
		return (1);
	}
	else
		return (0);
}
