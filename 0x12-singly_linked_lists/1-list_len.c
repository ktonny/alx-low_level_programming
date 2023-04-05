#include <stddef.h>
#include "lists.h"
/**
  *list_len - a function that returns the number of elements
  *@h: points to the header
  *Return: number of elements
  */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
