#include "main.h"
#include <stddef.h>
/**
  *_strchr - locates acharacter in a string
  *@s: points to a string
  *@c: character
  *Return: s
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
