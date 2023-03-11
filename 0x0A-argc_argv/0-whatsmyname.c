#include <stdio.h>
#include <stdlib.h>
/**
  *main - a program that prints its name
  *@argc:argument count
  *@argv - points to pointer string
  */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s", argv[0]);
	return (0);
}
