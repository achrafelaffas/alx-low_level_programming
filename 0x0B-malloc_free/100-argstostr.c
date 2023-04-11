#include "main.h"
#include <stdlib.h>


/**
 * argstostr -  concatenates all the arguments of your program.
 *
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 * Otherwise - a pointer to the new string.
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int a, b, i, s;

	s = ac;
	i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			s++;
	}

	string = malloc(sizeof(char) * s + 1);
	if (string == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			string[i++] = av[a][b];

		string[i++] = '\n';
	}

	string[s] = '\0';

	return (string);
}
