#include <stdlib.h>
#include <stdio.h>
/**
  *main - a program that multiplies two numbers.
  *@argc: argument count
  *@argv: argument vector
  *Return: 0.
  */
int main(int argc, char *argv[])
{
	int multi;

	if (argc != 3)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	multi = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multi);
	return (0);
}
