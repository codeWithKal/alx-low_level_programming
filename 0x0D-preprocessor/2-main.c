#include <stdio.h>
#include "main.h"
#define PARENT_FILE __FILE__

/**
 * name_caller - calles the source file name
 * Return: nothing
 */
void name_caller(void)
{
	printf("%s", PARENT_FILE);
}

/**
 * main - calles the name_caller function
 * Return: 0 (always success)
 */
void main(void)
{
	name_caller();
}
