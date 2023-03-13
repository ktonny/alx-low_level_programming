#include "main.h"
#include <stdlib.h>
/**
  *create_array -  creates an array of chars, and
  *initializes it with a specific char
  *@size: size of array
  *@c: character to initializa
  *Return: arr
  */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
