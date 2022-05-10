#include <stdio.h>
#include "main.h"
#define PARENT_FILE _FILE_

/**
 * name_caller - calles the source file name
 * Return: nothing
 */
void name_caller()
{
	printf("%s", PARENT_FILE);
}

