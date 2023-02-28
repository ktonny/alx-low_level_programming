#include "main.h"
/**
  *puts_half - prints half of a string
  *@str: string
  *Return: void
  */
void puts_half(char *str)
{
	int u;
	int i;
	int n;

	u = 0;
	while (str[u] != '\0')
	{
		u++;
	}
	n = u / 2;
	for (i = n + 1; i < u; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\0');
}
