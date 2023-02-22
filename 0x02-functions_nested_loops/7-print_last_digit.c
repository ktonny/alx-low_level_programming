#include "main.h"
/**
  *print_last_digit - print last digit
  *@n: number
  *Return: last digit
  */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;
	_putchar(lastdigit);
	return (lastdigit);
}
