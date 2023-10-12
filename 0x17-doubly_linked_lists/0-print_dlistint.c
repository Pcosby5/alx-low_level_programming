#include "lists.h"

/**
 * print_dlistint - Print all elements of a dlistint_t list
 * @h: Pointer to the head of the doubly-linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
    // Initialize the count of nodes to 0
    size_t num_of_nodes = 0;

    // Traverse the list and print each element
    while (h)
    {
        // Print the value of the current node
        printf("%d\n", h->n);
        // Move to the next node
        h = h->next;
        // Increment the node count
        num_of_nodes++;
    }

    // Return the total number of nodes in the list
    return num_of_nodes;
}
