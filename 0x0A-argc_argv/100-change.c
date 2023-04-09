#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* min_coins - Calculates the minimum number of coins required to make change
* for an amount of money.
* @amount: The amount of money to make change for.
*
* Return: The minimum number of coins required.
*/
int min_coins(int amount)
{
	int coins = 0;
	int coin_values[] = {25, 10, 5, 2, 1};
	int num_coin_values = sizeof(coin_values) / sizeof(coin_values[0]);

	for (int i = 0; i < num_coin_values; i++)
	{
		int coin = coin_values[i];

		while (amount >= coin)
		{
			amount -= coin;
			coins++;
		}
	}

	return (coins);
}

/**
* main - Entry point. Calculates the minimum number of coins required to make
* change for an amount of money supplied as a command-line argument.
* @argc: The number of command-line arguments.
* @argv: An array of command-line argument strings.
*
* Return: 0 if successful, 1 if an incorrect number of command-line arguments
* is supplied.
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	int num_coins = min_coins(amount);

	printf("%d\n", num_coins);

	return (0);
}

