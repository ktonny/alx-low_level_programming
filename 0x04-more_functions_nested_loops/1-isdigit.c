#include "main.h"
/**
  *_isdigit - checks for a digit
  *@c: number to be checked
  *Return: 0 0r 1
  */
int _isdigit(int c)
{
	if (c  >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
