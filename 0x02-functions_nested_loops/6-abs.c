#include "main.h"
/**
  *_abs - compute absolute value of an integer
  *@n: takes in int paremeter
  *Return: int.
  */
int _abs(int n) 
{
	if (n < 0)
	{
		return (n * - 1);
	}
	else if(n == 0)
	{
		return (0);
	}
	else if(n > 0)
	{
		return (n);
	}
	return (0);
}
