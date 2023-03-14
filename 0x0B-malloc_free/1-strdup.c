#include "main.h"
#include <stdlib.h>
/**
  *_strdup - copies a string to a newly alloated space
  *@str: points to the string
  *Return: pointer to space in memory
  */
char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
