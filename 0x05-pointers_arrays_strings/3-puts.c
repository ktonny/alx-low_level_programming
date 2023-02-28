#include "main.h"
/**
  *_puts - prints a string
  *@str: dtring
  *Return: void
  */
void _puts(char *str)
{
	int u;

	u = 0;
	while (str[u] != '\0')
	{
		_putchar(str[u]);
	}
	putchar('\n');
}
