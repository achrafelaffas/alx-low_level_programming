#include "main.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff, check;
unsigned int num, i;

num = 0;
check = 1;
diff = n ^ m;
for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
{
if (check == (diff & check))
num++;
check <<= 1;
}
return (num);
}
