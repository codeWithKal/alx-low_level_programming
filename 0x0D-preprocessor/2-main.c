#include <stdio.h>
#include "main.h"
#define PARENT_FILE __FILE__
/**
 * main - calles the name_caller function
 * Return: 0 (always success)
 */
int main(void)
{
	printf("%s\n", PARENT_FILE);
	return (0);
}
