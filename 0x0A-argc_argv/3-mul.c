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

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
}
