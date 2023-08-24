#include "lists.h"
#include <stdio.h>


/**
 * list_len - returns the length of the pointer
 * @h: pointer to head of the list
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
