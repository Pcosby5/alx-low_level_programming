#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list
 * @h: Pointer to the head of the doubly-linked list
 *
 * Return: The number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_nodes = 0; /* Initialize the count of nodes to 0 */
	/* Traverse the list and count each element */
	while (h != NULL)
	{
		h = h->next;    /* Move to the next node */
		num_of_nodes++; /* Increment the node count */
	}

	return (num_of_nodes); /* Return the total number of nodes in the list */
}
