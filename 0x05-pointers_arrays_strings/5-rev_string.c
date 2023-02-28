#include "main.h"
/**
  *rev_string - a function that reverses a string
  *@s: string
  *Return: void
  */
void rev_string(char *s)
{
	int u;
	int i;
	int m;

	u = 0;
	while(s[u] != '\0')
	{
		u++;
	}
	m = 0;
	for(i = u - 1; i >= 0; i--)
	{
		s[m] += s[u];
	}
}
