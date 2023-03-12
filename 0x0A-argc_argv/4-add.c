#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int checknum(char *s);
/**
  *main - adds positive numbers
  *@argc: argument count
  *@argv: argument vector
  *Return: 0.
  */
int main(int argc, char *argv[])
{
	int sum;
	int i;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (checknum(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error");
			printf("\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
/**
  *checknum - checks if a string is a digit
  *@s: point to a string
  *Return: int
  */
int checknum(char *s)
{
	unsigned int i;

	i = 0;
	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
