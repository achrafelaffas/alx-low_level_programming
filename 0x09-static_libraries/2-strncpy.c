#include "main.h"

/**
 * _strncpy - copies a string.
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: the number of bytes to be copied
 * Return: the result (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int numOfBytes;

	for (numOfBytes = 0; numOfBytes < n && src[numOfBytes] != '\0'; numOfBytes++)
		dest[numOfBytes] = src[numOfBytes];
	for (; numOfBytes < n; numOfBytes++)
		dest[numOfBytes] = '\0';
	return (dest);
}
