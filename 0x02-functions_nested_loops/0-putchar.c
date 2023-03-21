#include "main.h"

/**
 * main-print putchar followed by a new line
 *
 *Return :always 0
 */

int main(void)
{
	char str[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r','\0'};
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
