#include <stdlib.h>
#include "main.h"
/**
  *array_range -  creates an array of integers.
  *@min: miimum value
  *@max: maximum value
  *Return: ptr
  */
int *array_range(int min, int max)
{
	int *ptr;
	int rangesize;
	int i;
	int n;

	if (min > max)
	{
		return (NULL);
	}
	rangesize = (max - min) + 1;
	ptr = malloc(sizeof(int) * rangesize);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	n = min;
	while (i < rangesize)
	{
		ptr[i] = n;
		i++;
		n++;
	}
	return (ptr);
}
