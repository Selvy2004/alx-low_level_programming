#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entery point
 * Description: prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: takes input from another.
 * @argv: takes input from another
 * Return: always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int amount, coins = 0;

	if (argc != 2)
		printf("Error\n");
		return (1);

	amount = atoi(argv[1]);

	if (amount < 0)
		printf("0\n");
		return (0);
	while (amount > 0)
	{
		if (amount >= 25)
		{
			amount -= 25;
			coins++;
		}
		else if (amount >= 10)
		{
			amount -= 10;
			coins++;
		}
		else if (amount >= 5)
		{
			amount -= 5;
			coins++;
		}
		else if (amount >= 2)
		{
			amount -= 2;
			coins++;
		}
		else
			amount -= 1;
			coins++;
	}

	printf("%d\n", coins);
	return (0);
}
