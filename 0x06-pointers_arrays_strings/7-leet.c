#include "main.h"
/**
  *leet -  encodes a string into 1337.
  *@str: points to a string
  *Return: str
  */
char *leet(char *str)
{
	int i;
	int x;
	char arr1[5];
	char arr2[5];
	char arr3[5];

	arr1[5] = {'A', 'E', 'O', 'T', 'L'};
	arr2[5] = {'a', 'e', 'o', 't', 'l'};
	arr3[5] = {'4', '3', '0', '7', '1'};
	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		while (x < 5)
		{
			if (arr1[x] == str[i] || arr2[x] == str[i])
			{
				str[i] = arr3[x];
			}
			x++;
		}
		x = 0;
		1++;
	}
	return (str);
}
