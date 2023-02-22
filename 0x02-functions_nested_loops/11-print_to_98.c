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
			_putchar(i);
			_putchar(',');
			if (i == 98)
			{
				break;
			}
			_putchar(' ');
		}
	}
	else if (n == 98)
	{
		_putchar(n);
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i);
			_putchar(',');
			if (i == 98)
			{
				break;
			}
			_putchar(',');
		}
	}
}
