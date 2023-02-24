#include "main.h"
/**
  *more_numbers - prints 0 - 14 10 times.
  *
  *Return: void.
  */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
