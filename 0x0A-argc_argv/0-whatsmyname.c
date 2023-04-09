#include "main.h"
#include <stdio.h>

/**
 * main - main function
 *
 * @argc: number of passed arguments
 * @argv: array of agrs names
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
