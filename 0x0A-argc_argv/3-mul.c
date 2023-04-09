#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - mul. of two integers
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 - success, 1 - error.
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (1);
}
