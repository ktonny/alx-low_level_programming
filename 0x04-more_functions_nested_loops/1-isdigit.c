#include "main.h"
/**
  *_isdigit - checks for a digit
  *@c: number to e checked
  *Return: 0 0r 1
  */
int _isdigit(int c)
{
	if (c  >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
