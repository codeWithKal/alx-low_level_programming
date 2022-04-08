#include <unistd.h>
#include <stdio.h>
/**
 * main - prints to the standard error without using
 * @void: no parameter 
 *
 * Return: 1
 */
int main(void)
{
	write(2,
		"and that piece of art is useful\" - Dora korpar, 2015-10-19\n",
			59);
	return (1);
}
