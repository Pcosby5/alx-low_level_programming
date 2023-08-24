#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all element of a list
 * @h: pointer to head of the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t p = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		p++;
	}
	return (p);
}
