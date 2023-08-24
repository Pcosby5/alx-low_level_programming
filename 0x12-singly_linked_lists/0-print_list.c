#include "lists.h"

/**
 * print_list - prints all element of a list
 * size_t - size of nodes
 * @h: pointer to head of the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nill\n)");
		else
			printf("[%lu] %s\n", n, h->str);

		n++;

		h = h->next;

	}
	return (n);
}
