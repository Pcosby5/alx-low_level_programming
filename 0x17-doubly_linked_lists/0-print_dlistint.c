#include "lists.h"

/**
* print_dlistint - Print all elements of a dlistint_t list
* @h: Pointer to the head of the doubly-linked list
*
* Return: The number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}
