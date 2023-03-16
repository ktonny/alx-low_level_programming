#include <stdlib.h>
#include "main.h"
/**
  *_calloc - allocates memory for an array
  *@nmemb: number of elements
  *@size: size in bytes of each element
  *Return: ptr
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
