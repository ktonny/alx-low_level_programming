#include <stdio.h>
#include "main.h"
/**
  *print_to_98 -  prints all natural numbers
  *@n: integer
  *Return: void
  */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			printf(",");
			if (i == 98)
			{
				break;
			}
			printf(" ");
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			printf(" ");
			if (i == 98)
			{
				break;
			}
			printf(",");
		}
	}
}
