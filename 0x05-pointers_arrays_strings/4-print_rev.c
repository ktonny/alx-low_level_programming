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
	for (i = u; i >= 0; i--)
	{
		_putchar(str[i])
	}
	_putchar('\n');
}
