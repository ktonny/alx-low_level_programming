#include "main.h"
/**
  *_strncat -  concatenates two strings.
  *@dest: desti string
  *@src: string
  *Return: char *
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int m;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (m = 0; m < n; m++)
	{
		dest[i] = src[m];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
}
