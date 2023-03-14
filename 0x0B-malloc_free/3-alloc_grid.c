#include <stdlib.h>
#include "main.h"
/**
  *alloc_grid - a pointer to a 2 dimensional array of integers.
  *@width: width
  *@height: heigth
  *Return: ptr
  */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
