#include "main.h"
/**
  *reverse_array - reverses the content of an array of integers
  *@a: points to the array of integers
  *@n: size of the array
  *Return: void
  */
void reverse_array(int *a, int n)
{
	int i;
	int y;

	for (i = 0; i < n / 2; i++)
	{
		y = a[i];
		a[i] = a[n -1];
		a[n -i] = y;
		n--;
	}
}
