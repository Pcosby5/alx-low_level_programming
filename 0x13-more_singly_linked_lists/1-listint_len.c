#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the len of a linked list
 * @h: pointer to the list
 * Return: len of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
