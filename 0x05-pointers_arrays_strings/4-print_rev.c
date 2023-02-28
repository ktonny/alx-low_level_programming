#include "main.h"
/**
  *print_rev -  prints a string, in reverse
  *@s: prints string
  *Return: void
  */
void print_rev(char *s)
{
	int u;
	int i;
	
	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	for (i = u - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
