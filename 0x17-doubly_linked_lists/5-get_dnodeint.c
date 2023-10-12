#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the doubly-linked list
 * @index: Index of the node to retrieve, starting from 0
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num_of_nodes = 0; /* Initialize a count for nodes */
	dlistint_t *temp = head;	   /* Initialize a temporary node */

	while (temp)
	{
		if (num_of_nodes == index) /* Chek if curr node idx matches desired index */
			return (temp);		   /* Return the current node when the index matches */
		temp = temp->next;		   /* Move to the next node */
		num_of_nodes++;			   /* Increment the count for nodes */
	}
	return (NULL); /* Return NULL if the desired node does not exist */
}
