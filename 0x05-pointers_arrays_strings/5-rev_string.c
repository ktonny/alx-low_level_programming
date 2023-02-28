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
	char c;

	u = 0;
	while(s[u] != '\0')
	{
		u++;
	}
	m = u;
	for(i = 0; i < u / 2; i++)
	{
		c = s[i];
		s[i] = s[m - 1];
		s[m - 1] = c;
		m--;
	}
		m++;
	}
}
