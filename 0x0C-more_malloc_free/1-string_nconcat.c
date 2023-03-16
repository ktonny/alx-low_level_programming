#include <stdlib.h>
#include "main.h"
/**
  *_strlen - string length
  *@s: points to a string
  *Return: i
  */
int _strlen(char *s)
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
  *string_nconcat - a function that concatenates two strings.
  *@s1: points to a string
  *@s2: points to a string
  *@n: number of bytes
  **Return: s
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i;
	unsigned int j;
	int size;
	int m;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = _strlen(s1);
	size = i + n + 1;
	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (0);
	}
	i = 0;
	m = 0;
	while (s1[i] != '\0')
	{
		s[m] = s1[i];
		i++;
		m++;
	}
	j = 0;
	while (j < n && s2[j] != '\0')
	{
		s[m] = s2[j];
		j++;
		m++;
	}
	s[m] = '\0';
	return (s);
}
