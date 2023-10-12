#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given idx in a list
 * @head: Pointer to a pointer to the head of the doubly-linked list
 * @index: Index of the node to delete (index starts at 0)
 *
 * Return: 1 if the deletion succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head; /* Declare a temporary node variable */
	unsigned int i;

	if (head == NULL || *head == NULL) /* Chk if head is NULL or if list is null*/
		return (-1);
	if (index == 0) /* Check if the first node should be deleted */
	{
		*head = temp->next; /* Update the head pointer to the next node */
		if (temp->next != NULL)
			temp->next->prev = NULL; /* Update the prev ptr of new headnode */
		free(temp);					 /* Free the deleted node */
		return (1);					 /* Return 1 to indicate success */
	}

	for (i = 0; i < index && temp != NULL; i++)
	{
		temp = temp->next; /* Move to the node at index - 1 */
	}

	if (temp == NULL) /* Check if the given index is out of range */
		return (-1);
	temp->prev->next = temp->next; /* Update the next ptr of prev node */
	if (temp->next != NULL)
		temp->next->prev = temp->prev; /* Update the prev ptr of nextnode */
	free(temp);						   /* Free the deleted node */
	return (1);						   /* Return 1 to indicate success */
}
