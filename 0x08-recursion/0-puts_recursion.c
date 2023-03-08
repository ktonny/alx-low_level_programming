#include "main.h"
/**
  *_puts_recursion - prints  a string
  *@s: points to a string
  *Return: void
  */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
void _puts_recursion(char *s)
{
	if (_strlen(s) == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
