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

