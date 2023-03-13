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
	int n;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 1;
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * i);
	for (n = 0; n <= i - 1; n++)
	{
		s[n] = str[n];
	}
	s[i] = '\0';
	return (s);
}
