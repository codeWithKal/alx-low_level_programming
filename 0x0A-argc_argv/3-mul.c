#include <stdio.h>
/**
 * main - prints the muliplication of two numbers
 * @argc: the number of arguments
 * @argv: the available parameters array
 * Return: 0 if sucess and 1 if not
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argv[1] != NULL && argv[2] != NULL)
	{
		mul = argv[1] * argv[2];
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}


