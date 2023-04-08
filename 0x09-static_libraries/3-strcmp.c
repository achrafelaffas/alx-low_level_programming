#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: result (int)
 * result > 0 : s1 > s2
 * result < 0 : s1 < s2
 * result = 0 : s1 = s2
 */

int _strcmp(char *s1, char *s2)
{
	int i, result;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
