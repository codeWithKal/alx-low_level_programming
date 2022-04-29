#include <stdio.h>
#include <stdlib.h>
/**
 * main - sums up the posive numbers
 * @argc: the number of parameters
 * @argv: the array that contains the arguments
 * Return: 0 upon sucess and 1 upon error
 */
int main(int argc, char *argv[])
{
	int sum, i, number;

	sum = 0;
	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			number = atoi(argv[i]);
			if (number == 0)
			{
				printf("Error\n");
				return (1);
			}
			else if (number > 0)
			{
				sum += number;
				return (0);
			}
			else
			{
				continue;
			}
		}
		printf("%d\n", sum);
	}
}
