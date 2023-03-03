#include "main.h"
/**
  *_strcmp - compares two strings
  *@s1: point to a string to be changed
  *@s2: points to a string to be changed
  *Return: flag
  */
int _strcmp(char *s1, char *s2)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			flag = s1[i] - s2[i];
			break;
		}
	i++;
	}
	return (flag);
}
