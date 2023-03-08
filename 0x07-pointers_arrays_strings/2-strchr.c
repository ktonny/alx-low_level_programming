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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
