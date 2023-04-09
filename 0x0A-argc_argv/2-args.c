#include "main.h"
#include <stdio.h>

/**
 * main - prints all args
 *
 * @argc: args count
 * @argv: array of args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
