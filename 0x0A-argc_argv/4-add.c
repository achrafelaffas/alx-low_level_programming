#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char **argv)
{
	int i, j, s;

	s = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(argv[i]);
	}

	if (argc == 1)
	{
		printf("0\n");
	}
	else
		printf("%d\n", s);
	return (0);
}
