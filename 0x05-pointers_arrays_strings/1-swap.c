#include "main.h"
/**
  *swap_int - swaps the values of two integers
  *@a: integer to be changed
  *@b: integer to be swapped
  *Return: void
  */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
