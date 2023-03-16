#include "main.h"
#include <stdlib.h>
/**
  *_strlen - calculates string lenghts
  *@s: points to the string
  *Return: length
  */
int _strlen(char *s)
{
	int i;

	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
  *argstostr - a function that concatenates all the arguments
  *@ac: argument count
  *@av: points to array
  *Return: ptr
  */
char *argstostr(int ac, char **av)
{
	int n;
	char *ptr;
	int sum;
	int size;
	int i;
	char *s;
	int r;

	r = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	sum = 0;
	for (n = 0; n < ac; n++)
	{
		size = _strlen(av[n]);
		sum += size;
	}
	ptr = malloc(sizeof(int) * (size + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < ac; n++)
	{
		s = av[n];
		i = 0;
		while (s[i])
		{
			ptr[r] = s[i];
			i++;
			r++;
		}
		if (ptr[r] == '\0')
		{
			ptr[r++] = '\n';
		}
	}
	return (ptr);
}
