#include "main.h"
int _sqrt_recursion(int n);
int _sqrt(int n, int guess);
/**
  *_sqrt_recursion - returns the natural square root of a number.
  *@n: int
  *Return: int
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 1));
}
/**
  *_sqrt - returns square root
  *@n: int
  *@guess: int
  *Return: int
  */
int _sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (_sqrt(n, guess + 1));
}
