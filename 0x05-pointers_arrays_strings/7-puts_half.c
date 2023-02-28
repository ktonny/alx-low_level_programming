#include "main.h"
/**
  *puts_half - prints half of a string
  *@str: string
  *Return: void
  */
void puts_half(char *str)
{
	int u;
	int n;
	int i;

	u = 0;
	while (str[u] != '\0')
	{
		u++;
	}
	if (u % 2 == 0)
	{
		n = u / 2;
	}
	else
	{
		n = (u + 1) / 2;
	}
	for (i = n; i < u; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
