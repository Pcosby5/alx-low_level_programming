#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a list
 * @h: Pointer to a pointer to the head of the doubly-linked list
 * @idx: Index where the new node should be added (index starts at 0)
 * @n: Value to be stored in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;  /* Declare a new node variable */
	dlistint_t *temp = *h;  /* Declare a temporary node variable */
	unsigned int i;

	if (h == NULL)  /* Check if the head is NULL */
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));  /* Allocate memory for the new node */
	if (new_node == NULL)  /* Check if malloc fails */
		return (NULL);
	new_node->n = n;  /* Set the value of the new node to n */
	new_node->prev = NULL;  /* Initialize the previous pointer of the new node */
	new_node->next = NULL;  /* Initialize the next pointer of the new node */
	if (idx == 0)  /* Check if the newnode should be added at the begin'n */
	{
		new_node->next = *h;  /* Set next pointer of new node to current headnode */
		if (*h != NULL)
			(*h)->prev = new_node;  /* Update the prev pointer of the curr headnode */
		*h = new_node;  /* Update the head pointer to the new node */
		return (new_node);  /* Return the address of the new node */
	}
	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;  /* Move to the node at index idx - 1 */
	}
	if (temp == NULL)  /* Check if the given index is out of range */
	{
		free(new_node);  /* Free the new node */
		return (NULL);
	}
	new_node->next = temp->next;  /* Set the next ptr of new node to nextnde */
	if (temp->next != NULL)
		temp->next->prev = new_node;  /* Update the prev pointer of the next node */
	temp->next = new_node;  /* Update the next pointer of the current node */
	new_node->prev = temp;  /* Update the previous pointer of the new node */
	return (new_node);  /* Return the address of new node */
}
