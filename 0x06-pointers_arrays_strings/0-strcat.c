#include "main.h"
/**
  *_strcat - concatenates two string
  *@dest: string
  *@src: string
  *Return: char *
  */
char *_strcat(char *dest, char *src)
{
	int i;
	int m;
	int n;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		m++;
	}
	for (n = 0; n < m; n++)
	{
		dest[i] = src[n];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
