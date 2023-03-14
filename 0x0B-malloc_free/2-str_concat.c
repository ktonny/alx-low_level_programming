#include "main.h"
#include <stdlib.h>
/**
  *_strlen - calculates length of the string
  *@s: points to a string
  *Return: length
  */
char _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
  *str_concat - a function taht concatenates two strings
  *@s1: points to a string
  *@s2: points to a string
  *Return: char
  */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	i = _strlen(s1);
	if (s2 == NULL)
	{
		s2 = "";
	}
	j = _strlen(s2);
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
