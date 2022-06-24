#include <stdio.h>
#include <stdlib.h>

/**
 * main -counter
 * @argc: int
 * @argv: array
 * Return: void
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print("Error\n");
		return (1);
	}

	int amount = atoi(argv[1]);
	int coins = 0;

	if (amount > 25)
	{
		while (amount >= 25)
		{
			amount -= 25;
			coins++;
		}
	}
	if (amount < 25 && amount > 10)
	{
		while (amount >= 5)
			amount -= 10, coins++;
	}
	if (amount < 10 && amount > 5)
	{
		while (amount >= 5)
			amount -= 5, coins++;
	}
	if (amount < 5 && amount > 2)
	{
		while (amount >= 2)
			amount -= 2, coins++;
	}
	if (amount == 1 || amount == 2 || amount == 5 || amount == 10 || amount == 25)
		coins++;
	printf("%d\n", coins);
	return (0);
}
