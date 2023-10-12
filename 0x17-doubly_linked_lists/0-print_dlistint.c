#include "lists.h"

/**
 * print_dlistint - Print all elements of a dlistint_t list
 * @h: Pointer to the head of the doubly-linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t num_of_nodes = 0;  // Initialize the count of nodes to 0

    // Traverse the list and print each element
    while (h)
    {
        printf("%d\n", h->n);  // Print the value of the current node
        h = h->next;           // Move to the next node
        num_of_nodes++;        // Increment the node count
    }

    return num_of_nodes;  // Return the total number of nodes in the list
}
