#include <unistd.h>

/**
 * main - prints a string without using either printf or puts
 * @void: doesn't  take any argument
 *
 * Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora korpar, 2015-10-19\n", 59);
	return (1);
}
