#include "main.h"
#include <stddef.h>
/**
  *_memcpy - copies memory area
  *@dest: dest memory area
  *@src: source
  *@n: number of bytes
  *Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
