#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
  *print_list - print all elements of a list_t
  *@h: points to first header of the linked list
  *Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t n;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
	
