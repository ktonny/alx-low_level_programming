#include "main.h"
/**
  *string_toupper - changes all lowercase of a string to upper
  *@str: point to string to be changed
  *Return: str
  */
char *string_toupper(char *str)
{
	int u;
	int i;

	u = 0;
	while (str[u] != '\0')
	{
		u++;
	}
	for (i = 0; i < u; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] -32;
		}
	}
	return (str);
}
