#include "main.h"
#include "stdbool.h"
/**
  *_strspn - gets the length of a prefix substring
  *s: string
  *accept: string
  *Return: unsigned int
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int initial_length = 0;
	unsigned int len1;
	unsigned int len2;
	unsigned int i;
	unsigned int j;

	len1 = 0;
	len2 = 0;
	while (s[len1] != 0)
	{
		len1++;
	}
	while (accept[len2] != 0)
	{
		len2++;
	}
	for (i = 0; i < len1; i++)
	{
		bool found_match = false;
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == accept[i])
			{
				found_match = true;
				break;
			}
		}
		if (!found_match)
		{
			break;
		}
		else
		{
			initial_length++;
		}
	}
	return (initial_length);
}
