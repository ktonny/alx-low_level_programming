#include <stdlib.h>
#include "main.h"
/**
  *malloc_checked -  allocates memory using malloc
  *@b: points to number of bytes
  *Return: void
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit (98);
	}
	return (ptr);
}

