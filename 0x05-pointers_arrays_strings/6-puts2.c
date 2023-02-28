#include "main.h"
/**
  *puts2 - prints every character of a string
  *@str: string
  *Return: void
  */
void puts2(char *str)
{
	int u;
	int i;

	u = 0;
	while (str[u] != '\0')
	{
		u++;
	}
	for (i = 0; i <= u - 1; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
