#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: takes a parameter of n
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	return (last_digit);
}
