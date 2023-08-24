#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - returns the number of elements
 * @h: pointer to the list
 * Return: number of elements in a node
 */

size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h != NULL)
	{
		p++;
		h = h->next;
	}
	return (p);
}
