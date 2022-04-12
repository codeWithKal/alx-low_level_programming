#include "main.h"
/**_islower - checks for the case of a letter
 * @parameter: takes an integral parameter c
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
