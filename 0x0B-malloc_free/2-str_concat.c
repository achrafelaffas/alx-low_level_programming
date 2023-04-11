#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 * Otherwise - a pointer the newly-allocated space in memory
 * containing the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int ndx, len, concat_ndx;

	len = 0;
	concat_ndx = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (ndx = 0; s1[ndx] || s2[ndx]; ndx++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (ndx = 0; s1[ndx]; ndx++)
		concat_str[concat_ndx++] = s1[ndx];

	for (ndx = 0; s2[ndx]; ndx++)
		concat_str[concat_ndx++] = s2[ndx];

	return (concat_str);
}
