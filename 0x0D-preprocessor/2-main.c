#include <stdio.h>
#include "main.h"
#define PARENT_FILE __FILE__
/**
 * main - calles the name_caller function
 * Return: 0 (always success)
 */
void main(void)
{
	printf("%s\n", PARENT_FILE);
}
