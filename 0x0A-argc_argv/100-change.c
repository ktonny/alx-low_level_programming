#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - prints the minimum number of coins
 *make change for an amount of money
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i;
	int num;
	int noofcoins;

	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0");
		printf("\n");
	}
	noofcoins = 0;
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			noofcoins++;
			num -= coins[i];
		}
	}
	printf("%d\n", noofcoins);
	return (0);
}
