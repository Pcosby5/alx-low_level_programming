#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Pointer to a pointer to the head of the doubly-linked list
 * @n: Value to be stored in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;  /* Declare a new node variable */
	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)  /* Check if malloc fails */
		return (NULL);

	new_node->n = n;  /* Set the value of the new node to n */
	new_node->prev = NULL;  /* Set the previous pointer of the new node to NULL */
	new_node->next = *head;  /* Set the next pointer of the new node*/

	if (*head != NULL)
		(*head)->prev = new_node;  /* Update the previous pointer*/
	*head = new_node;  /* Update the head to point to the new node */
	(*num_of_nodes)++;  /* Increment the node count */

	return (new_node);  /* Return the address of the new element */
}
